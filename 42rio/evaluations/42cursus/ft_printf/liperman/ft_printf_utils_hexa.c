/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_hexa.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liperman <liperman@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:37:08 by liperman          #+#    #+#             */
/*   Updated: 2022/07/26 13:18:57 by liperman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa(unsigned int num, char format)
{
	int	result;
	int	nbr;

	result = 0;
	if (num >= 16)
		result += ft_print_hexa(num / 16, format);
	nbr = num % 16;
	if (nbr <= 9)
		result += ft_putchar(nbr + '0');
	else
	{
		if (format == 'x')
			result += ft_putchar(nbr - 10 + 'a');
		if (format == 'X')
			result += ft_putchar(nbr - 10 + 'A');
	}
	return (result);
}

int	ft_putptr(uintptr_t ptr)
{
	int	result;
	int	nbr;

	result = 0;
	if (ptr >= 16)
		result += ft_putptr(ptr / 16);
	nbr = ptr % 16;
	if (nbr <= 9)
		result += ft_putchar(nbr + '0');
	else
		result += ft_putchar(nbr - 10 + 'a');
	return (result);
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	result;

	result = 0;
	result += ft_print_str("0x");
	if (ptr == 0)
		return (result += ft_putchar('0'));
	result += ft_putptr(ptr);
	return (result);
}
