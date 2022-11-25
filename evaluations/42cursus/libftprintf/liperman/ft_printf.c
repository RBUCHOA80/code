/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:28:59 by liperman          #+#    #+#             */
/*   Updated: 2022/07/26 18:47:49 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_convert(va_list args, char type)
{
	int	result;

	result = 0;
	if (type == 'c')
		result += ft_putchar(va_arg(args, int));
	if (type == 's')
		result += ft_print_str(va_arg(args, char *));
	if (type == 'i' || type == 'd')
		result += ft_print_int(va_arg(args, int));
	if (type == 'u')
		result += ft_print_uint(va_arg(args, unsigned int));
	if (type == '%')
		result += ft_print_percent();
	if (type == 'x' || type == 'X')
		result += ft_print_hexa(va_arg(args, unsigned long long), type);
	if (type == 'p')
		result += ft_print_ptr(va_arg(args, unsigned long long));
	return (result);
}

int	ft_printf(const char *control_str, ...)
{
	int		i;
	int		print_len;
	va_list	args;

	i = 0;
	print_len = 0;
	va_start(args, control_str);
	while (control_str[i] != '\0')
	{
		if (control_str[i] == '%')
			print_len += ft_convert(args, control_str[++i]);
		else
			print_len += ft_putchar(control_str[i]);
		i++;
	}
	va_end(args);
	return (print_len);
}
