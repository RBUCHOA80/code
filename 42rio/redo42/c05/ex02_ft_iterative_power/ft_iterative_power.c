/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 23:30:10 by ruchoa            #+#    #+#             */
/*   Updated: 2022/03/26 12:40:05 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	int	nb;
	int	power;

	nb = 2;
	power = 10;
	printf("%d\n", ft_iterative_power(nb, power));
	return (0);
}

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else
	{
		while (power != 0)
		{
			result *= nb;
			power--;
		}
		return (result);
	}
}
