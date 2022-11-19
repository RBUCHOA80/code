/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:34:11 by ruchoa            #+#    #+#             */
/*   Updated: 2022/03/13 23:29:02 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int	nb;

	nb = 12;
	printf("%d\n", ft_iterative_factorial(nb));
	return (0);
}

int	ft_iterative_factorial(int nb)
{
	int	fac;

	fac = 1;
	while (nb != 0)
	{
		fac *= nb;
		nb--;
	}
	return (fac);
}
