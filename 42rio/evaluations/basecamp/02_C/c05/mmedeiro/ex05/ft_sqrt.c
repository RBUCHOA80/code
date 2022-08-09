/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:15:46 by mmedeiro          #+#    #+#             */
/*   Updated: 2022/03/14 01:45:53 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	counter;
	int	sqr;

	counter = 1;
	sqr = 1;
	while (sqr != nb)
	{
		counter++;
		sqr = counter * counter;
		if (sqr > nb)
			return (0);
	}
	return (counter);
}

int main(void)
{
	int a = ft_sqrt (144);
	printf("R = %i\n", a);
}
