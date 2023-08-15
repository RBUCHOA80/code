/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabatist <pabatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:21:23 by pabatist          #+#    #+#             */
/*   Updated: 2023/08/14 16:21:24 by pabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "../libft.h"
#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		result;
	size_t	index;

	va_start(ap, s);
	index = 0;
	result = 0;
	while (s[index])
	{
		if (s[index] == '%' && is_type(s[index + 1]))
		{
			result += choose_type(s[index + 1], ap);
			index++;
		}
		else
		{
			result++;
			ft_putchar_fd(s[index], 1);
		}
		index++;
	}
	va_end(ap);
	return (result);
}

int	is_type(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'i' || c == 'u'
		|| c == 'x' || c == 'X' || c == 'd' || c == '%')
		return (1);
	else
		return (0);
}

int	choose_type(char c, va_list ap)
{
	if (c == 'c')
		return (char_output(ap));
	else if (c == 's')
		return (string_output(ap));
	else if (c == 'p')
		return (pointer_output(ap));
	else if (c == 'i' || c == 'd')
		return (integer_output(ap));
	else if (c == 'u')
		return (unsigned_decimal_output(ap));
	else if (c == 'x')
		return (hexadecimal_lowercase_output(ap));
	else if (c == 'X')
		return (hexadecimal_uppercase_output(ap));
	else
		return (percent_output());
}
