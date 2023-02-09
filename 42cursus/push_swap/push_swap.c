/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:35:50 by ruchoa            #+#    #+#             */
/*   Updated: 2023/02/08 22:23:08 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	ft_do_swap(t_list **stk_a, t_list **stk_b)
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
}

void	ft_move_to(t_list **stk_a, int index, int range)
{
	int	dist;

	dist = ft_search_index(*stk_a, index, range);
	if (dist > 0)
		while (dist-- > 0)
			ra(stk_a);
	else
		while (dist++ < 0)
			rra(stk_a);
}

int	ft_increase_range(int len, int range)
{
	if (len / 2 / 10)
		range = range + (len / 2 / 10);
	else
		range++;
	return (range);
}

void	push_swap(t_list **stk_a, t_list **stk_b)
{
	int	range;
	int	size;
	int	len;

	if (!(stk_a && stk_b))
		return ;
	len = ft_lstsize(*stk_a);
	range = 0;
	while (!ft_inorder(*stk_a, len) && ft_lstsize(*stk_a) >= 2)
	{
		size = ft_lstsize(*stk_a);
		while (size-- > 0)
		{
			ft_do_rotate(stk_a, stk_b);
			ft_do_swap(stk_a, stk_b);
			if (ft_inorder(*stk_a, len))
				break ;
			ft_move_to(stk_a, len / 2, range);
			ft_push_to_b(stk_a, stk_b, len / 2, range);
		}
		range = ft_increase_range(len, range);
	}
	ft_push_to_a(stk_a, stk_b);
}
