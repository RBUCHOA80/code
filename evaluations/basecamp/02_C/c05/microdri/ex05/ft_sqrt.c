/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri  <microdri@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 06:18:02 by microdri          #+#    #+#             */
/*   Updated: 2022/04/09 06:18:02 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	x;

	x = 1;
	if (nb > 0)
	{
		while (x * x <= nb)
		{
			if (x * x == nb)
				return (x);
			else if (x >= 46341)
				return (0);
			x++;
		}
	}
	return (0);
}

#include <stdio.h>

int main ()
{
	printf("%d\n", ft_sqrt(-5));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(16));
	printf("%d\n", ft_sqrt(25));
}