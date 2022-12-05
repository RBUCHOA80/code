/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 20:11:48 by ruchoa            #+#    #+#             */
/*   Updated: 2022/12/05 20:25:12 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	ft_bubble_sort(int *arr, int size)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (j && arr[j - 1] > arr[j])
			{
				temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
			j++;
		}
		i++;
	}
}
