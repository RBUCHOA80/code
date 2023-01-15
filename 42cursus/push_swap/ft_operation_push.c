/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operation_push.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 22:20:19 by ruchoa            #+#    #+#             */
/*   Updated: 2023/01/15 07:31:40 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./push_swap.h"

void	ft_operation_push(t_list **stk_a, t_list **stk_b)
{
	void	*content;

	if ((*stk_a))
	{
		content = ft_lsttake_front(stk_a);
		ft_lstadd_front(stk_b, ft_lstnew(content));
		return ;
	}
	ft_printf("\e[0;33mWarning: \e[0m");
}

/* 
pa (push a):
Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.
 */
void	pa(t_list **stk_b, t_list **stk_a)
{
	ft_operation_push(stk_b, stk_a);
	ft_printf("pa\n");
	return ;
}

/* 
pb (push b):
Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.
 */
void	pb(t_list **stk_a, t_list **stk_b)
{
	ft_operation_push(stk_a, stk_b);
	ft_printf("pb\n");
	return ;
}
