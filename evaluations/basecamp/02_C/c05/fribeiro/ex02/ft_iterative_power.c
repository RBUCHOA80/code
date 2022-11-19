/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fribeiro <fribeiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 23:59:59 by fribeiro          #+#    #+#             */
/*   Updated: 2022/02/19 00:15:33 by fribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	index;

	result = 1;
	if (power < 0)
		result = 0;
	else
	{
		index = power;
		while (index)
		{
			result *= nb;
			index--;
		}
	}
	return (result);
}


#include <stdio.h>
int main (void)
{
	int index;

	index = 10;
	while(index >= -1)
	{
		printf("power=%d, result=%d\n", index, ft_iterative_power(2, index));
		index--;
	}
	return (0);
}

