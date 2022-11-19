/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:35:50 by ruchoa            #+#    #+#             */
/*   Updated: 2022/11/16 22:26:33 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_list **stack_a, t_list **stack_b)
{
	int	i;

	if (stack_a && stack_b)
	{
		i = 0;
		while (i < ft_lstsize(*stack_a))
		{
			ft_printf("A\n");
			if ((*stack_a)->content && (*stack_a)->next->content && ft_atoi((*stack_a)->content) > ft_atoi((*stack_a)->next->content) && (*stack_b)->content && (*stack_b)->next->content && ft_atoi((*stack_b)->content) < ft_atoi((*stack_b)->next->content))
				ss(stack_a, stack_b);
			else if ((*stack_a)->content && (*stack_a)->next->content && ft_atoi((*stack_a)->content) > ft_atoi((*stack_a)->next->content))
				sa(stack_a);
			else if ((*stack_b)->content && (*stack_b)->next->content && ft_atoi((*stack_b)->content) < ft_atoi((*stack_b)->next->content))
				sb(stack_b);

			if ((*stack_a)->content && (*stack_a)->next->content && ft_atoi((*stack_a)->content) < ft_atoi(ft_lstlast((*stack_a))->content) && (*stack_b)->content && (*stack_b)->next->content && ft_atoi((*stack_b)->content) > ft_atoi(ft_lstlast((*stack_b))->content))
				rr(stack_a, stack_b);
			if ((*stack_a)->content && (*stack_a)->next->content && ft_atoi((*stack_a)->content) < ft_atoi(ft_lstlast((*stack_a))->content))
				ra(stack_a);
			if ((*stack_b)->content && (*stack_b)->next->content && ft_atoi((*stack_b)->content) > ft_atoi(ft_lstlast((*stack_b))->content))
				rb(stack_b);

			if ((*stack_a)->content && (*stack_a)->next->content && ft_atoi((*stack_a)->content) > ft_atoi(ft_lstlast((*stack_a))->content) && (*stack_b)->content && (*stack_b)->next->content && ft_atoi((*stack_b)->content) < ft_atoi(ft_lstlast((*stack_b))->content))
				rrr(stack_a, stack_b);
			if ((*stack_a)->content && (*stack_a)->next->content && ft_atoi((*stack_a)->content) > ft_atoi(ft_lstlast((*stack_a))->content))
				rra(stack_a);
			if ((*stack_b)->content && (*stack_b)->next->content && ft_atoi((*stack_b)->content) < ft_atoi(ft_lstlast((*stack_b))->content))
				rrb(stack_b);
			i++;
		}
	}
	return ;
}
		// pa(stack_b, stack_a);
		// pb(stack_a, stack_b);
		// pb(stack_a, stack_b);
		// pb(stack_a, stack_b);
