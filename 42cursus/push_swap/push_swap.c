/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:35:50 by ruchoa            #+#    #+#             */
/*   Updated: 2023/01/15 10:46:41 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	ft_search_index(t_list *stk, int mid, int range)
{
	int	dist;
	int	len;

	len = ft_lstsize(stk);
	dist = 0;
	while (ft_lstsize(stk) && (*((int *)stk->content) < (mid - range) || (mid + range) < *((int *)stk->content)))
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
	int	range;
	int	dist;
	int	size;
	int	mid;

	if (!(stk_a && stk_b))
		return ;
	(void) stk_b;
	mid = ft_lstsize(*stk_a) / 2;
	range = 0;
	while (ft_lstsize(*stk_a) > 1)
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
				
			dist = ft_search_index(*stk_a, mid, range);
			if (dist > 0)
				while (dist-- > 0)
						ra(stk_a);
			else if (dist < 0)
				while (dist++ < 0)
					rra(stk_a);

			if ((mid - range) <= *((int *)(*stk_a)->content) && *((int *)(*stk_a)->content) <= (mid + range))
			{
				pb(stk_a, stk_b);
				if (ft_lstsize(*stk_b) >= 2 && *((int *)(*stk_b)->content) < mid)
					rb(stk_b);
			}

		}
		if (mid / 10)
			range = range + (mid / 10);
		else
			range++;
	}
	while (ft_lstsize(*stk_b))
	{
		pa(stk_b, stk_a);
		if (ft_lstsize(*stk_a) >= 2 && (*((int *)(*stk_a)->content) > *((int *)(*stk_a)->next->content)) && ft_lstsize(*stk_b) >= 2 && (*((int *)(*stk_b)->next->content) > *((int *)(*stk_b)->content)))
			ss(stk_a, stk_b);
		else if (ft_lstsize(*stk_a) >= 2 && (*((int *)(*stk_a)->content) > *((int *)(*stk_a)->next->content)))
			sa(stk_a);
		else if (ft_lstsize(*stk_b) >= 2 && (*((int *)(*stk_b)->next->content) > *((int *)(*stk_b)->content)))
			sb(stk_b);
	}
}
