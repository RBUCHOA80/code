/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swapv2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:35:50 by ruchoa            #+#    #+#             */
/*   Updated: 2023/01/15 07:31:40 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	ft_inorder(t_list *stk)
{
	if (!stk)
		return (0);
	while (stk && stk->next)
	{
		if ((*(int *)stk->next->content - *(int *)stk->content) != 1)
			return (0);
		stk = stk->next;
	}
	return (1);
}

int	ft_search_range(t_list *stk, int mid)
{
	int	dist;
	int	len;
	int	n;

	n = ft_lstsize(stk) / 20;
	len = ft_lstsize(stk);
	dist = 0;
	while (stk && stk->next && *((int *)stk->content) <= (mid + n) && *((int *)stk->content) > (mid - n))
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
	int	dist;
	int	mid;

	if (!(stk_a && stk_b))
		return ;
	mid = ft_lstsize(*stk_a) / 2;
	while (!ft_inorder(*stk_a))
	{
		if (ft_lstsize(*stk_a) && ft_lstsize(*stk_b))
		{
			if (*((int *)(*stk_a)->content) > *((int *)(*stk_a)->next->content) && *((int *)(*stk_b)->content) < *((int *)(*stk_b)->next->content))
				ss(stk_a, stk_b);
			else if (*((int *)(*stk_a)->content) > *((int *)ft_lstlast((*stk_a))->content) && *((int *)(*stk_b)->content) < *((int *)ft_lstlast(*stk_b)->content))
				rr(stk_a, stk_b);
			else if (*((int *)(*stk_a)->content) > *((int *)ft_lstlast((*stk_a))->content) && *((int *)(*stk_b)->content) < *((int *)ft_lstlast(*stk_b)->content))
				rrr(stk_a, stk_b);
		}
		if (ft_lstsize(*stk_a))
		{
			if (*((int *)(*stk_a)->content) > *((int *)(*stk_a)->next->content))
				sa(stk_a);
			else if (*((int *)(*stk_a)->content) > *(int *)(ft_lstlast((*stk_a))->content))
				ra(stk_a);
			else if (*((int *)(*stk_a)->content) > *(int *)(ft_lstlast((*stk_a))->content))
				rra(stk_a);
		}
		if (ft_lstsize(*stk_b))
		{
			if (*((int *)(*stk_b)->content) < *((int *)(*stk_b)->next->content))
				sb(stk_b);
			else if (*((int *)(*stk_b)->content) < *(int *)(ft_lstlast(*stk_b)->content))
				rb(stk_b);
			else if (*((int *)(*stk_b)->content) < *(int *)(ft_lstlast(*stk_b)->content))
				rrb(stk_b);
		}
		dist = ft_search_range(*stk_a, mid);
		if (dist > 0)
			while (dist--)
				ra(stk_a);
		else if (dist < 0)
			while (dist++)
				rra(stk_a);
		if (!ft_inorder(*stk_a))
			pb(stk_a, stk_b);
	}
	while ((*stk_b))
		pa(stk_b, stk_a);
}
