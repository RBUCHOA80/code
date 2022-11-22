/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operation_swap.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 22:09:29 by ruchoa            #+#    #+#             */
/*   Updated: 2022/11/21 22:07:29 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	ft_operation_swap(t_list **stack)
{
	void	*content1;
	void	*content2;

	content1 = ft_lsttake_front(stack);
	content2 = ft_lsttake_front(stack);
	ft_lstadd_front(stack, ft_lstnew(content1));
	ft_lstadd_front(stack, ft_lstnew(content2));
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
	ft_printf("sa\e[0m\n");
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
	ft_printf("sb\e[0m\n");
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
	ft_printf("ss\e[0m\n");
	return ;
}
