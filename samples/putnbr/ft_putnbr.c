/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 11:05:02 by lpaixao-          #+#    #+#             */
/*   Updated: 2023/11/17 22:29:23 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

static int	my_putchar(char n);

int	ft_putnbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else
	{
		if (n < 0)
		{
			count += write(1, "-", 1);
			n *= -1;
		}
		if (n > 9)
			count += ft_putnbr(n / 10);
		n = (n % 10);
		count += my_putchar(n + '0');
	}
	return (count);
}

static int	my_putchar(char n)
{
	write(1, &n, 1);
	return (1);
}

int	g_nbr[] = {\
			-1234567890, \
			-3, \
			-2, \
			-1, \
			0, \
			1, \
			2, \
			3, \
			1234567890, \
			};

int	main(void)
{
	int	i;
	int	arr_size;
	int	ret;

	arr_size = sizeof(g_nbr) / sizeof(*g_nbr);
	i = 0;
	while (i < arr_size)
	{
		ret = ft_putnbr(g_nbr[i]);
		printf(" <- %i Bytes", ret);
		printf(" <- nbr[%i]\n", i);
		i++;
	}
	return (0);
}
