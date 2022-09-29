/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:35:50 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/28 21:44:12 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_list **stack_a, t_list **stack_b)
{
	int i;

	if (stack_a && stack_b)
	{
		i = 0;
		while (i < ft_lstsize(*stack_a))
		{
			if (ft_atoi((*stack_a)->content) > ft_atoi((*stack_a)->next->content))
				sa(stack_a);
			if (ft_atoi((*stack_a)->content) > ft_atoi(ft_lstlast((*stack_a))->content))
				rra(stack_a);
			i++;
		}
		// pa(stack_b, stack_a);
		// pb(stack_a, stack_b);
		// pb(stack_a, stack_b);
		// pb(stack_a, stack_b);
		// rr(stack_a, stack_b);
		// ra(stack_a);
		// rb(stack_b);
		// rrr(stack_a, stack_b);
		// rra(stack_a);
		// rrb(stack_b);
		// ss(stack_a, stack_b);
		// sa(stack_a);
		// sb(stack_b);
	}
	return ;
}
