/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:13:52 by mmedeiro          #+#    #+#             */
/*   Updated: 2022/02/17 20:33:54 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	counter;

	counter = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (counter < nb)
	{
		if (nb % counter == 0)
			return (0);
		counter++;
	}
	return (1);
}

int main(void)
{
	int a = ft_is_prime (77);
	printf("R = %i\n", a);
}
