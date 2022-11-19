/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:24:01 by mmedeiro          #+#    #+#             */
/*   Updated: 2022/02/17 20:21:23 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	value;

	value = nb;
	if (!power)
		return (1);
	else if (power < 0)
		return (0);
	while (--power > 0)
		nb *= value;
	return (nb);
}

int	main(void)
{
	int a = ft_iterative_power(3, 2);
	printf("R = %i\n", a);
}
