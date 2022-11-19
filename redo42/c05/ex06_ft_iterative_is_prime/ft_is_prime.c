/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 08:20:46 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/02 17:02:31 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int	nb[15];
	int	i;

	nb[0] = -2147483648;
	nb[1] = -1234567890;
	nb[2] = -1;
	nb[3] = 0;
	nb[4] = 1;
	nb[5] = 1234567890;
	nb[6] = 2147483647;
	nb[7] = 127;
	nb[8] = 456;
	nb[9] = 87;
	i = 0;
	while (i < 10)
	{
		printf("nb[%i] = %i = %i\n", i, ft_is_prime(nb[i]), nb[i]);
		i++;
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while ((nb / 2) > i)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

/*
Escreva uma função que retorne 1 se o número for primo e 0 se não for.
0 e 1 não são números primos.
*/
