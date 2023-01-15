/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:35:50 by ruchoa            #+#    #+#             */
/*   Updated: 2023/01/15 17:33:55 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	ft_max(t_list *stk)
{
	int	max;

	max = 0;
	while (ft_lstsize(stk))
	{
		if (max < *((int *)stk->content))
			max = *((int *)stk->content);
		stk = stk->next;
	}
	return (max);
}

int	ft_search_index(t_list *stk, int index, int range)
{
	int	dist;
	int	len;

	len = ft_lstsize(stk);
	dist = 0;
	while (ft_lstsize(stk) && (*((int *)stk->content) < (index - range) || (index + range) < *((int *)stk->content)))
	{
		stk = stk->next;
		dist++;
	}
	if (dist > len / 2)
		return (-1 * (len - dist));
	else
		return (dist);
}

void	push_swap(t_list **stk_a, t_list **stk_b)
{
	int	index;
	int	range;
	int	dist;
	int	size;

	if (!(stk_a && stk_b))
		return ;
	(void) stk_b;
	index = ft_lstsize(*stk_a) / 2;
	range = 0;
	while (ft_lstsize(*stk_a) > 2)
	{
		size = ft_lstsize(*stk_a);
		while (size-- > 0)
		{
 			if (ft_lstsize(*stk_a) >= 2 && (*((int *)(*stk_a)->content) - *((int *)(*stk_a)->next->content) == 1) && ft_lstsize(*stk_b) >= 2 && (*((int *)(*stk_b)->next->content) - *((int *)(*stk_b)->content) == 1))
				ss(stk_a, stk_b);
			else if (ft_lstsize(*stk_a) >= 2 && (*((int *)(*stk_a)->content) - *((int *)(*stk_a)->next->content) == 1))
				sa(stk_a);
			else if (ft_lstsize(*stk_b) >= 2 && (*((int *)(*stk_b)->next->content) - *((int *)(*stk_b)->content) == 1))
				sb(stk_b);
			dist = ft_search_index(*stk_a, index, range);
			if (dist > 0)
				while (dist-- > 0)
					ra(stk_a);
			else if (dist < 0)
				while (dist++ < 0)
					rra(stk_a);
			if ((index - range) <= *((int *)(*stk_a)->content) && *((int *)(*stk_a)->content) <= (index + range))
			{
				pb(stk_a, stk_b);
				if (ft_lstsize(*stk_b) >= 2 && *((int *)(*stk_b)->content) < index)
					rb(stk_b);
			}
		}
		if (index / 10)
			range = range + (index / 10);
		else
			range++;
	}
	while (ft_lstsize(*stk_b))
	{
		index = ft_max(*stk_b);
		dist = ft_search_index(*stk_b, index, 0);
		if (dist > 0)
			while (dist-- > 0)
				rb(stk_b);
		else if (dist < 0)
			while (dist++ < 0)
				rrb(stk_b);
		pa(stk_b, stk_a);
	}
}
