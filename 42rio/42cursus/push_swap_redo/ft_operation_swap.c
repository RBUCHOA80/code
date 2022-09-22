/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operation_swap.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 22:09:29 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/21 23:12:35 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_operation_swap(t_list **stack)
{
	return ;
}

/* 
sa (swap a): 
Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements.
 */
void	sa(t_list **stack_a)
{
	ft_operation_swap(stack_a);
	ft_printf("sa\n");
	return ;
}

/* 
sb (swap b):
Swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements.
 */
void	sb(t_list **stack_b)
{
	ft_operation_swap(stack_b);
	ft_printf("sb\n");
	return ;
}

/* 
ss :
sa and sb at the same time.
 */
void	ss(t_list **stack_a, t_list **stack_b)
{
	ft_operation_swap(stack_a);
	ft_operation_swap(stack_b);
	ft_printf("ss\n");
	return ;
}
