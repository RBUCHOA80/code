/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operation_rotate.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 22:14:10 by ruchoa            #+#    #+#             */
/*   Updated: 2022/11/21 22:07:29 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	ft_operation_rotate(t_list **stack)
{
	void	*content;

	if ((*stack))
	{
		content = ft_lsttake_front(stack);
		ft_lstadd_back(stack, ft_lstnew(content));
		return ;
	}
	ft_printf("\e[0;33mWarning: ");
}

/* 
ra (rotate a):
Shift up all elements of stack a by 1.
The first element becomes the last one.
 */
void	ra(t_list **stack_a)
{
	ft_operation_rotate(stack_a);
	ft_printf("ra\e[0m\n");
	return ;
}

/* 
rb (rotate b):
Shift up all elements of stack b by 1.
The first element becomes the last one.
 */
void	rb(t_list **stack_b)
{
	ft_operation_rotate(stack_b);
	ft_printf("rb\e[0m\n");
	return ;
}

/* 
rr :
ra and rb at the same time.
 */
void	rr(t_list **stack_a, t_list **stack_b)
{
	ft_operation_rotate(stack_a);
	ft_operation_rotate(stack_b);
	ft_printf("rr\e[0m\n");
	return ;
}
