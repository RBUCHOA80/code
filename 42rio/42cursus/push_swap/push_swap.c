/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:35:50 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/26 12:33:17 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_list **stack_a, t_list **stack_b)
{
	if (stack_a && stack_b)
	{
		pa(stack_b, stack_a);
		pb(stack_a, stack_b);
		pb(stack_a, stack_b);
		pb(stack_a, stack_b);
		rr(stack_a, stack_b);
		ra(stack_a);
		rb(stack_b);
		rrr(stack_a, stack_b);
		rra(stack_a);
		rrb(stack_b);
		ss(stack_a, stack_b);
		sa(stack_a);
		sb(stack_b);
	}
	return ;
}
