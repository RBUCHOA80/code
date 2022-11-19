/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastilh <aleccruzy@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 18:24:06 by acastilh          #+#    #+#             */
/*   Updated: 2022/04/07 16:54:25 by acastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	i = 1;
	n = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (++i <= power)
	{
		nb *= n;
	}
	return (nb);
}

#include <stdio.h>

int		ft_iterative_power(int nb, int power);

int		main(void)
{
	int		nb;
	int		power;

	nb = 2;
	power = 10;
	printf("%d\n", ft_iterative_power(nb, power));
}
