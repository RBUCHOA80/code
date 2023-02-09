/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operation_rotate.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 22:14:10 by ruchoa            #+#    #+#             */
/*   Updated: 2023/02/08 21:50:01 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	ft_operation_rotate(t_list **stk)
{
	void	*content;

	if (ft_lstsize(*stk) >= 2)
	{
		content = ft_lsttake_front(stk);
		ft_lstadd_back(stk, ft_lstnew(content));
		return ;
	}
	ft_printf("Warning: ");
}

/* 
ra (rotate a):
Shift up all elements of stk a by 1.
The first element becomes the last one.
 */
void	ra(t_list **stk_a)
{
	ft_operation_rotate(stk_a);
	ft_printf("ra\n");
	return ;
}

/* 
rb (rotate b):
Shift up all elements of stk b by 1.
The first element becomes the last one.
 */
void	rb(t_list **stk_b)
{
	ft_operation_rotate(stk_b);
	ft_printf("rb\n");
	return ;
}

/* 
rr :
ra and rb at the same time.
 */
void	rr(t_list **stk_a, t_list **stk_b)
{
	ft_operation_rotate(stk_a);
	ft_operation_rotate(stk_b);
	ft_printf("rr\n");
	return ;
}

void	ft_do_rotate(t_list **stk_a, t_list **stk_b)
{
	(void)stk_b;
	if (ft_lstsize(*stk_a) >= 2 && !ft_inorder(*stk_a, ft_max(*stk_a))
		&& *(int *)(*stk_a)->content == ft_max(*stk_a)
		&& ft_lstsize(*stk_a) != 5)
		ra(stk_a);
	else if (ft_lstsize(*stk_a) >= 2 && !ft_inorder(*stk_a, ft_max(*stk_a))
		&& *(int *)(*stk_a)->next->content == ft_max(*stk_a)
		&& ft_lstsize(*stk_a) != 5)
		rra(stk_a);
}
