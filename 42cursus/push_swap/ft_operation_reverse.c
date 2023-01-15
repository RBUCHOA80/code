/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operation_reverse.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 22:17:52 by ruchoa            #+#    #+#             */
/*   Updated: 2023/01/15 07:31:40 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	ft_operation_reverse(t_list **stk)
{
	void	*content;

	if ((*stk))
	{
		content = ft_lsttake_back(stk);
		ft_lstadd_front(stk, ft_lstnew(content));
		return ;
	}
	ft_printf("\e[0;33mWarning: \e[0m");
}

/* 
rra (reverse rotate a):
Shift down all elements of stk a by 1.
The last element becomes the first one.
 */
void	rra(t_list **stk_a)
{
	ft_operation_reverse(stk_a);
	ft_printf("rra\n");
	return ;
}

/* 
rrb (reverse rotate b):
Shift down all elements of stk b by 1.
The last element becomes the first one.
 */
void	rrb(t_list **stk_b)
{
	ft_operation_reverse(stk_b);
	ft_printf("rrb\n");
	return ;
}

/* 
rrr :
rra and rrb at the same time.
 */
void	rrr(t_list **stk_a, t_list **stk_b)
{
	ft_operation_reverse(stk_a);
	ft_operation_reverse(stk_b);
	ft_printf("rrr\n");
	return ;
}
