/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   auxi2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilveir <csilveir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 08:53:34 by csilveir          #+#    #+#             */
/*   Updated: 2022/06/24 08:22:45 by csilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long n)
{
	int	len;

	len = 0;
	if (n < 16)
	{
		if (n < 10)
			len += ft_putchar(n + '0');
		else
			len += ft_putchar(n - 10 + 'a');
		return (len);
	}
	else
	{
		len += ft_putptr(n / 16);
		len += ft_putptr(n % 16);
	}
	return (len);
}

int	ft_puthex(unsigned int n, char type)
{
	int	len;

	len = 0;
	if (n < 16)
	{
		if (n < 10)
			len += ft_putchar(n + '0');
		else
		{
			if (type == 'x')
				len += ft_putchar(n - 10 + 'a');
			else
				len += ft_putchar(n - 10 + 'A');
		}
		return (len);
	}
	else
	{
		len += ft_puthex(n / 16, type);
		len += ft_puthex(n % 16, type);
	}
	return (len);
}

int	ft_putlongdec(unsigned int n)
{
	int	len;

	len = 0;
	if (n < 10)
		len += ft_putchar(n + '0');
	else
	{
		len += ft_putlongdec(n / 10);
		len += ft_putlongdec(n % 10);
	}
	return (len);
}

int	ft_putdec(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len += ft_putchar('-');
		if (n == -2147483648)
		{
			len += ft_putchar('2');
			n = -147483648;
		}
		n = n * (-1);
	}
	if (n < 10)
		len += ft_putchar(n + '0');
	else
	{
		len += ft_putdec(n / 10);
		len += ft_putdec(n % 10);
	}
	return (len);
}
