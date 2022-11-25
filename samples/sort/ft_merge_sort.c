/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_merge_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:00:51 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/14 23:33:43 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_merge(int *arr, int start, int mid, int end)
{
	int	*temp;
	int	size;
	int	p1;
	int	p2;
	int	i;

	size = (end - start + 1);
	p1 = start;
	p2 = mid + 1;
	temp = malloc(sizeof(*temp) * size);
	if (!temp)
		return ;
	i = 0;
	while (i < size)
	{
		if ((p1 > mid) == 0 && (p2 > end) == 0)
		{
			if (arr[p1] < arr[p2])
				temp[i] = arr[p1++];
			else
				temp[i] = arr[p2++];
		}
		else
			if ((p1 > mid) == 0)
				temp[i] = arr[p1++];
		else
			temp[i] = arr[p2++];
		i++;
	}
	i = 0;
	while (i < size)
		arr[start++] = temp[i++];
	free (temp);
}

void	ft_merge_sort(int *arr, int start, int end)
{
	int	mid;

	if (start < end)
	{
		mid = ((start + end) / 2);
		ft_merge_sort(arr, start, mid);
		ft_merge_sort(arr, mid + 1, end);
		ft_merge(arr, start, mid, end);
	}
}
