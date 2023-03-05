/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 20:47:43 by vchastin          #+#    #+#             */
/*   Updated: 2023/03/04 17:41:20 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	binary_search(int array[], int low, int high, int x)
{
	int	mid;

	if (high >= low)
	{
		mid = (low + high) / 2;
		if (array[mid] == x)
			return (mid);
		if (array[mid] > x)
			return (binary_search(array, low, mid - 1, x));
		return (binary_search(array, mid + 1, high, x));
	}
	return (-1);
}

void	bubble_sort(int size, int array[])
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (array[i] > array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
