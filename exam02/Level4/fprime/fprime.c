/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 20:57:56 by ruchoa            #+#    #+#             */
/*   Updated: 2023/02/17 22:04:16 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fprime.h"

void	fprime(int nbr)
{
	int	temp;
	int	i;

	temp = nbr;
	if (temp == 1)
	{
		printf("1\n");
		return ;
	}
	i = 2;
	while (temp > 1)
	{
		if ((temp % i) == 0)
		{
			if (temp != nbr)
				printf("*");
			printf("%i", i);
			temp = temp / i;
		}
		else
			i++;
	}
	printf("\n");
	return ;
}
