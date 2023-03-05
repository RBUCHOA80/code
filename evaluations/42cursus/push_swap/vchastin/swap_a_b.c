/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:07:14 by vchastin          #+#    #+#             */
/*   Updated: 2023/03/04 18:09:17 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack, int flag)
{
	int	tmp;
	int	top_next;

	if (stack->size < 2)
		return ;
	tmp = stack->top->content;
	top_next = stack->top->next->content;
	pop_node_top(stack);
	pop_node_top(stack);
	push_node_top(stack, tmp);
	push_node_top(stack, top_next);
	if (flag == 65)
		write(1, "sa\n", 3);
	else if (flag == 66)
		write(1, "sb\n", 3);
	return ;
}

void	swap_all(t_stack	*a, t_stack	*b)
{
	swap(a, 0);
	swap(b, 0);
	write(1, "ss\n", 3);
}
