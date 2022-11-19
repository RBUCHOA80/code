/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fribeiro <fribeiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 23:59:59 by fribeiro          #+#    #+#             */
/*   Updated: 2022/02/19 00:15:33 by fribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	binary_search(int low, int high, int nb);

int	ft_sqrt(int nb);

int	binary_search(int low, int high, int nb)
{
	int	result;
	int	center;
	int	power_two_center;

	center = (low + high) / 2;
	power_two_center = center * center;
	if (low == high)
		result = low;
	else if (low >= high || low >= center || center >= high)
		result = 0;
	else if (power_two_center == nb)
		result = center;
	else if (power_two_center > nb)
		result = binary_search(low, center, nb);
	else
		result = binary_search(center, high, nb);
	return (result);
}

int	ft_sqrt(int nb)
{
	int	result;
	int	high;
	int	low;

	low = 0;
	high = nb / 2;
	if (nb < 1)
		result = 0;
	else if (nb == 1)
		result = 1;
	else if (nb == high * high)
		result = high;
	else
		result = binary_search(low, high, nb);
	return (result);
}


#include <stdio.h>
int main (void)
{
	int index;
	int result;

	index = 150000;
	while(index >= -1)
	{
		result = ft_sqrt(index);
		if (result)
			printf("number=%d, squared=%d\n", index, result);
		index--;
	}
	return (0);
}

