/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastilh <aleccruzy@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 18:24:06 by acastilh          #+#    #+#             */
/*   Updated: 2022/04/07 16:42:11 by acastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	if (nb > 0)
	{
		while (n * n <= nb)
		{
			if (n * n == nb)
				return (n);
			else if (n >= 46341)
				return (0);
			n++;
		}
	}
	return (0);
}

#include <stdio.h>

int		ft_sqrt(int index);

int		main(void)
{
	printf("-10 = %d (0)\n", ft_sqrt(-10));
	printf("-1 = %d (0)\n", ft_sqrt(-1));
	printf(" 0 = %d (0)\n", ft_sqrt(0));
	printf(" 1 = %d (1)\n", ft_sqrt(1));
	printf(" 2 = %d (0)\n", ft_sqrt(2));
	printf(" 3 = %d (0)\n", ft_sqrt(3));
	printf(" 4 = %d (2)\n", ft_sqrt(4));
	printf(" 9 = %d (3)\n", ft_sqrt(9));
	printf(" 16 = %d (4)\n", ft_sqrt(16));
	printf(" 25 = %d (5rs)\n", ft_sqrt(1234567890));

}
