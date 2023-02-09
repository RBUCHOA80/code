/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operation_push.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 22:20:19 by ruchoa            #+#    #+#             */
/*   Updated: 2023/02/08 21:48:22 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./push_swap.h"

void	ft_operation_push(t_list **stk_a, t_list **stk_b)
{
	void	*content;

	if ((*stk_a))
	{
		content = ft_lsttake_front(stk_a);
		ft_lstadd_front(stk_b, ft_lstnew(content));
		return ;
	}
	ft_printf("Warning: ");
}

/* 
pa (push a):
Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.
 */
void	pa(t_list **stk_b, t_list **stk_a)
{
	ft_operation_push(stk_b, stk_a);
	ft_printf("pa\n");
	return ;
}

/* 
pb (push b):
Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.
 */
void	pb(t_list **stk_a, t_list **stk_b)
{
	ft_operation_push(stk_a, stk_b);
	ft_printf("pb\n");
	return ;
}

void	ft_push_to_a(t_list **stk_a, t_list **stk_b)
{
	int	dist;

	while (ft_lstsize(*stk_b))
	{
		if (ft_lstsize(*stk_a) >= 2 && (*((int *)(*stk_a)->content)
			- *((int *)(*stk_a)->next->content) == 1)
			&& ft_lstsize(*stk_b) >= 2 && (*((int *)(*stk_b)->next->content)
			- *((int *)(*stk_b)->content) == 1))
			ss(stk_a, stk_b);
		else if (ft_lstsize(*stk_a) >= 2 && (*((int *)(*stk_a)->content)
			- *((int *)(*stk_a)->next->content) == 1))
			sa(stk_a);
		else if (ft_lstsize(*stk_b) >= 2 && (*((int *)(*stk_b)->next->content)
			- *((int *)(*stk_b)->content) == 1))
			sb(stk_b);
		dist = ft_search_index(*stk_b, ft_max(*stk_b), 1);
		if (dist > 0)
			while (dist-- > 0)
				rb(stk_b);
		else
			while (dist++ < 0)
				rrb(stk_b);
		pa(stk_b, stk_a);
	}
}

void	ft_push_to_b(t_list **stk_a, t_list **stk_b, int index, int range)
{
	if ((index - range) <= *((int *)(*stk_a)->content)
		&& *((int *)(*stk_a)->content) <= (index + range))
	{
		pb(stk_a, stk_b);
		if ((ft_lstsize(*stk_a) >= 2 && *((int *)(*stk_a)->content)
			> *((int *)ft_lstlast(*stk_a)->content))
			&& (ft_lstsize(*stk_b) >= 2 && *((int *)(*stk_b)->content) < index))
			rr(stk_a, stk_b);
		else if (ft_lstsize(*stk_b) >= 2 && *((int *)(*stk_b)->content) < index)
			rb(stk_b);
	}
}
