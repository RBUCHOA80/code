/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri  <microdri@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 06:15:23 by microdri          #+#    #+#             */
/*   Updated: 2022/04/09 06:15:23 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

#include <stdio.h>

int main()
{
	printf("%d\n", ft_iterative_power(4, 3));
	printf("%d\n", ft_iterative_power(-4, 3));
	printf("%d\n", ft_iterative_power(4, -3));
	printf("%d\n", ft_iterative_power(0, 3));
	printf("%d\n", ft_iterative_power(4, 0));
	printf("%d\n", ft_iterative_power(4, 3));
	printf("%d\n", ft_iterative_power(4, 5));
}