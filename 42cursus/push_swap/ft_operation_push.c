/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operation_push.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 22:20:19 by ruchoa            #+#    #+#             */
/*   Updated: 2022/11/21 22:07:29 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./push_swap.h"

void	ft_operation_push(t_list **stack_a, t_list **stack_b)
{
	void	*content;

	if ((*stack_a))
	{
		content = ft_lsttake_front(stack_a);
		ft_lstadd_front(stack_b, ft_lstnew(content));
		return ;
	}
	ft_printf("\e[0;33mWarning: ");
}

/* 
pa (push a):
Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.
 */
void	pa(t_list **stack_b, t_list **stack_a)
{
	ft_operation_push(stack_b, stack_a);
	ft_printf("pa\e[0m\n");
	return ;
}

/* 
pb (push b):
Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.
 */
void	pb(t_list **stack_a, t_list **stack_b)
{
	ft_operation_push(stack_a, stack_b);
	ft_printf("pb\e[0m\n");
	return ;
}
