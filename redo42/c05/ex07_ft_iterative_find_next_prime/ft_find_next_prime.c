/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 21:18:19 by ruchoa            #+#    #+#             */
/*   Updated: 2022/03/17 22:14:29 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	int	nb[10];
	int	i;

	nb[0] = -2147483648;
	nb[1] = -1234567890;
	nb[2] = -1;
	nb[3] = 0;
	nb[4] = 1;
	nb[5] = 1234567890;
	nb[6] = 2147483646;
	nb[7] = 120;
	nb[8] = 14;
	nb[9] = 20;
	i = 0;
	while (i < 10)
	{
		printf("nb[%i] = %i = %i\n", i, nb[i], ft_find_next_prime(nb[i]));
		i++;
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	int	p;
	int	i;

	p = nb;
	if (nb < 2)
		return (0);
	i = 2;
	while ((p / 2) > i)
	{
		if ((p % i) == 0)
		{
			p++;
			i = 1;
		}
		i++;
	}
	return (p);
}
