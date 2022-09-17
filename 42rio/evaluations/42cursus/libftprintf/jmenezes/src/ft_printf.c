/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 18:57:14 by jmenezes          #+#    #+#             */
/*   Updated: 2022/08/22 19:01:00 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.h"
#include "libft.h"
#include <stdarg.h>
#include <stdlib.h>

int				convert_char(t_conversion *conv, char c);
int				convert_str(t_conversion *conv, char *str);
int				convert_int(t_conversion *conv, int i);
int				convert_uint(t_conversion *conv, unsigned int u);
int				convert_hex(t_conversion *conv, unsigned int u);
int				convert_ptr(t_conversion *conv, void *p);
int				is_flag(char c);
int				is_conversion(const char *str);
t_conversion	*new_conversion(void);

static void	parse_conversion_flags(t_conversion *conv, const char **str)
{
	while (is_flag(**str))
	{
		if (**str == '#')
			conv->flag_hash = 1;
		else if (**str == '+')
			conv->flag_plus = 1;
		else if (**str == '-')
			conv->flag_minus = 1;
		else if (**str == '0')
			conv->flag_zero = 1;
		else if (**str == ' ')
			conv->flag_space = 1;
		(*str)++;
	}
}

static t_conversion	*extract_conversion(const char **str)
{
	t_conversion	*conv;

	conv = new_conversion();
	if (conv != NULL)
	{
		(*str)++;
		parse_conversion_flags(conv, str);
		if (ft_isdigit(**str))
			conv->min_width = ft_atoi(*str);
		while (ft_isdigit(**str))
			(*str)++;
		if (**str == '.')
		{
			conv->flag_period = 1;
			(*str)++;
		}
		if (ft_isdigit(**str))
			conv->precision = ft_atoi(*str);
		while (ft_isdigit(**str))
			(*str)++;
		conv->specifier = *((*str)++);
	}
	return (conv);
}

static int	eval_conversion(t_conversion *conv, va_list *ap)
{
	if (conv->specifier == 'c')
		return (convert_char(conv, va_arg(*ap, int)));
	if (conv->specifier == 's')
		return (convert_str(conv, va_arg(*ap, char *)));
	if (conv->specifier == 'i' || conv->specifier == 'd')
		return (convert_int(conv, va_arg(*ap, int)));
	if (conv->specifier == 'u')
		return (convert_uint(conv, va_arg(*ap, unsigned int)));
	if (conv->specifier == 'x' || conv->specifier == 'X')
		return (convert_hex(conv, va_arg(*ap, unsigned int)));
	if (conv->specifier == 'p')
		return (convert_ptr(conv, va_arg(*ap, void *)));
	return ((int)ft_putchar('%'));
}

static int	vdprintf(const char *fmt, va_list *ap)
{
	int				cnt;
	int				i;
	t_conversion	*conv;

	cnt = 0;
	while (*fmt != '\0')
	{
		if (is_conversion(fmt))
		{
			conv = extract_conversion(&fmt);
			if (conv == NULL)
				return (-1);
			i = eval_conversion(conv, ap);
			free(conv);
			if (i == -1)
				return (-1);
			cnt += i;
		}
		else
			cnt += (int)ft_putchar(*(fmt++));
	}
	return (cnt);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		res;

	va_start(ap, fmt);
	res = vdprintf(fmt, &ap);
	va_end(ap);
	return (res);
}
