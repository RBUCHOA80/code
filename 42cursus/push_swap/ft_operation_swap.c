/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operation_swap.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 22:09:29 by ruchoa            #+#    #+#             */
/*   Updated: 2023/01/15 16:16:20 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	ft_operation_swap(t_list **stk)
{
	void	*content1;
	void	*content2;

	if ((*stk) && (*stk)->next)
	{
		content1 = ft_lsttake_front(stk);
		content2 = ft_lsttake_front(stk);
		ft_lstadd_front(stk, ft_lstnew(content1));
		ft_lstadd_front(stk, ft_lstnew(content2));
		return ;
	}
	ft_printf("Warning: ");
}

/* 
sa (swap a): 
Swap the first 2 elements at the top of stk a.
Do nothing if there is only one or no elements.
 */
void	sa(t_list **stk_a)
{
	ft_operation_swap(stk_a);
	ft_printf("sa\n");
	return ;
}

/* 
sb (swap b):
Swap the first 2 elements at the top of stk b.
Do nothing if there is only one or no elements.
 */
void	sb(t_list **stk_b)
{
	ft_operation_swap(stk_b);
	ft_printf("sb\n");
	return ;
}

/* 
ss :
sa and sb at the same time.
 */
void	ss(t_list **stk_a, t_list **stk_b)
{
	ft_operation_swap(stk_a);
	ft_operation_swap(stk_b);
	ft_printf("ss\n");
	return ;
}
