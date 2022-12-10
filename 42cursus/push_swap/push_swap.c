/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:35:50 by ruchoa            #+#    #+#             */
/*   Updated: 2022/12/10 08:12:46 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	index_stack(t_list *stack, int *template)
{
	int	i;

	while (stack)
	{
		i = 0;
		while (template[i])
		{
			if (*((int *)stack->content) == template[i])
				*((int *)stack->content) = i + 1;
			i++;
		}
		stack = stack->next;
	}
	free(template);
}

void	push_swap(t_list **stack_a, t_list **stack_b)
{
	int	i;

	index_stack(*stack_a, tab_index(*stack_a));
	if (stack_a && stack_b)
	{
		i = 0;
		while (i < ft_lstsize(*stack_a))
		{
			//ft_printf_stacks((*stack_a), (*stack_b));
			if ((*stack_a) && (*stack_a)->content && (*stack_a)->next->content && (*stack_b) && (*stack_b)->content && (*stack_b)->next->content)
			{
				if (ft_atoi((*stack_a)->content) > ft_atoi((*stack_a)->next->content) && ft_atoi((*stack_b)->content) < ft_atoi((*stack_b)->next->content))
					ss(stack_a, stack_b);
				else if (ft_atoi((*stack_a)->content) > ft_atoi(ft_lstlast((*stack_a))->content) && ft_atoi((*stack_b)->content) < ft_atoi(ft_lstlast((*stack_b))->content))
					rr(stack_a, stack_b);
				else if (ft_atoi((*stack_a)->content) > ft_atoi(ft_lstlast((*stack_a))->content) && ft_atoi((*stack_b)->content) < ft_atoi(ft_lstlast((*stack_b))->content))
					rrr(stack_a, stack_b);
			}
			if ((*stack_a) && (*stack_a)->content && (*stack_a)->next->content)
			{
				if (ft_atoi((*stack_a)->content) > ft_atoi((*stack_a)->next->content))
					sa(stack_a);
				else if (ft_atoi((*stack_a)->content) > ft_atoi(ft_lstlast((*stack_a))->content))
					ra(stack_a);
				else if (ft_atoi((*stack_a)->content) > ft_atoi(ft_lstlast((*stack_a))->content))
					rra(stack_a);
			}
			if ((*stack_b) && (*stack_b)->content && (*stack_b)->next->content)
			{
				if (ft_atoi((*stack_b)->content) < ft_atoi((*stack_b)->next->content))
					sb(stack_b);
				else if (ft_atoi((*stack_b)->content) < ft_atoi(ft_lstlast((*stack_b))->content))
					rb(stack_b);
				else if (ft_atoi((*stack_b)->content) < ft_atoi(ft_lstlast((*stack_b))->content))
					rrb(stack_b);
			}
			i++;
		}
		ft_printf_stacks((*stack_a), (*stack_b));
	}
	return ;
}
