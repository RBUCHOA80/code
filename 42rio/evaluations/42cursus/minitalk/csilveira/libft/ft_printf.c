/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilveir <csilveir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 08:52:24 by csilveir          #+#    #+#             */
/*   Updated: 2022/06/24 08:12:38 by csilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_define(char type, va_list list)
{
	int		number;

	number = 0;
	if (type == 'c')
		number += ft_putchar(va_arg(list, int));
	if (type == 's')
		number += ft_putstr(va_arg(list, char *));
	if (type == 'p')
	{
		number += write(1, "0x", 2);
		number += ft_putptr(va_arg(list, unsigned long));
	}
	if (type == 'd' || type == 'i')
	{
		number += ft_putdec(va_arg(list, int));
	}
	if (type == 'u')
		number += ft_putlongdec(va_arg(list, unsigned int));
	if (type == 'x' || type == 'X')
		number += ft_puthex(va_arg(list, unsigned int), type);
	if (type == '%')
		number += ft_putchar(37);
	return (number);
}

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		i;
	int		printable_numbers;

	i = 0;
	printable_numbers = 0;
	va_start(list, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			printable_numbers += ft_define(str[i +1], list);
			i++;
		}
		else
			printable_numbers += ft_putchar(str[i]);
		i++;
	}
	va_end(list);
	return (printable_numbers);
}
