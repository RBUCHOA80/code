/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:39:29 by vchastin          #+#    #+#             */
/*   Updated: 2023/03/04 17:40:04 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_stack *a, t_stack *b, int size)
{
	int	count;
	int	i;
	int	j;

	count = 0;
	i = 0;
	while ((size - 1) >> count)
		count++;
	while (i < count)
	{
		j = 0;
		while (j < size)
		{
			if (((a->top->content >> i) & 1) == 1)
				rotate(a, 65);
			else
				pb(a, b);
			j++;
		}
		while (b->size)
			pa(a, b);
		i++;
	}
}
