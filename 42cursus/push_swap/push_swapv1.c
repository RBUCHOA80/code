/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swapv1.c                                      :+:      :+:    :+:   */
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

int	ft_search_index(t_list *stk, int index)
{
	int	dist;
	int	len;

	len = ft_lstsize(stk);
	dist = 0;
	while (stk && stk->next && *((int *)stk->content) != index)
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
	static int	index;
	int			dist;

	if (!(stk_a && stk_b))
		return ;
	ft_printf_stks(*stk_a, *stk_b);
	while ((*stk_a) && (*stk_a)->next && !ft_inorder(*stk_a))
	{
		if ((*((int *)(*stk_a)->content) - \
				*((int *)(*stk_a)->next->content)) == 1)
			sa(stk_a);
		dist = ft_search_index(*stk_a, index++);
		if (dist > 0)
			while (dist--)
				ra(stk_a);
		else if (dist < 0)
			while (dist++)
				rra(stk_a);
		if (!ft_inorder(*stk_a))
			pb(stk_a, stk_b);
		ft_printf_stks(*stk_a, *stk_b);
	}
	while ((*stk_b))
		pa(stk_b, stk_a);
	ft_printf_stks(*stk_a, *stk_b);
}
