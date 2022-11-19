/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:32:17 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/19 01:04:31 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int a = 15;
	int b;
	b = ft_iterative_factorial (a);
	printf("R = %i", b);
}

int	ft_iterative_factorial(int nb)
{
	int	f;

	f = (nb - 1);
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (f)
	{
		nb *= f;
		f--;
	}
	return (nb);
}
