/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:15:08 by mmedeiro          #+#    #+#             */
/*   Updated: 2022/02/17 20:12:07 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int	main(void)
{
	int a = 15;
	int b;
	b = ft_iterative_factorial (a);
	printf("R = %i", b);
}
