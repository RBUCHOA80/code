/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:35:50 by ruchoa            #+#    #+#             */
/*   Updated: 2023/01/15 01:53:15 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	ft_search_index(t_list *stack, int min, int max)
{
	int	dist;
	int	len;

	len = ft_lstsize(stack);
	dist = 0;
	while (ft_lstsize(stack) > 1 && (*((int *)stack->content) <= min || max <= *((int *)stack->content)))
	{
		stack = stack->next;
		dist++;
	}
	if (dist > len / 2)
		return (-1 * (len - dist));
	else
		return (dist);
}

void	push_swap(t_list **stack_a, t_list **stack_b)
{
	int	size;
	int	mid;
	int	range;
	int	dist;

	if (!(stack_a && stack_b))
		return ;
	(void) stack_b;
	mid = ft_lstsize(*stack_a) / 2;
	range = 0;
	while (ft_lstsize(*stack_a) > 0)
	{
		size = ft_lstsize(*stack_a);
		while (size-- > 0)
		{
			if (ft_lstsize(*stack_a) > 1 && (*((int *)(*stack_a)->next->content) - *((int *)(*stack_a)->content) == 1) && ft_lstsize(*stack_b) > 1 && (*((int *)(*stack_b)->next->content) - *((int *)(*stack_b)->content) == 1))
				ss(stack_a, stack_b);
			else if (ft_lstsize(*stack_a) > 1 && (*((int *)(*stack_a)->next->content) - *((int *)(*stack_a)->content) == 1))
				sa(stack_a);
			else if (ft_lstsize(*stack_b) > 1 && (*((int *)(*stack_b)->next->content) - *((int *)(*stack_b)->content) == 1))
				sb(stack_b);
				
			dist = ft_search_index(*stack_a, (mid - range), (mid + range));
			if (dist > 0)
				while (dist--)
				{
					if (ft_lstsize(*stack_b) > 1 && *((int *)(*stack_b)->content) <= mid)
						rr(stack_a, stack_b);
					else
						ra(stack_a);
				}
			else if (dist < 0)
				while (dist++)
				{
					if (ft_lstsize(*stack_b) > 1 && *((int *)(*stack_b)->content) <= mid)
						rb(stack_b);
					rra(stack_a);
				}

			if ((mid - range) <= *((int *)(*stack_a)->content) && *((int *)(*stack_a)->content) <= (mid + range))
			{
				pb(stack_a, stack_b);
				if (ft_lstsize(*stack_b) > 1 && *((int *)(*stack_b)->content) <= mid)
					rb(stack_b);
			}

		}
		if (mid / 10)
			range = range + (mid / 10);
		else
			range++;
	}
	while (ft_lstsize(*stack_b) > 0)
	{
		if (ft_lstsize(*stack_b) > 1 && *((int *)(*stack_b)->content) < *((int *)(*stack_b)->next->content))
			sb(stack_b);
		pa(stack_b, stack_a);
		if (ft_lstsize(*stack_a) > 1 && *((int *)(*stack_a)->content) > *((int *)(*stack_a)->next->content))
			sa(stack_a);
	}
}
