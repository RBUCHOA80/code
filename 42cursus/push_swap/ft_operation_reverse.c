/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operation_reverse.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 22:17:52 by ruchoa            #+#    #+#             */
/*   Updated: 2022/12/19 20:02:26 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	ft_operation_reverse(t_list **stack)
{
	void	*content;

	if ((*stack))
	{
		content = ft_lsttake_back(stack);
		ft_lstadd_front(stack, ft_lstnew(content));
		return ;
	}
	ft_printf("\e[0;33mWarning: \e[0m");
}

/* 
rra (reverse rotate a):
Shift down all elements of stack a by 1.
The last element becomes the first one.
 */
void	rra(t_list **stack_a)
{
	ft_operation_reverse(stack_a);
	ft_printf("rra\n");
	return ;
}

/* 
rrb (reverse rotate b):
Shift down all elements of stack b by 1.
The last element becomes the first one.
 */
void	rrb(t_list **stack_b)
{
	ft_operation_reverse(stack_b);
	ft_printf("rrb\n");
	return ;
}

/* 
rrr :
rra and rrb at the same time.
 */
void	rrr(t_list **stack_a, t_list **stack_b)
{
	ft_operation_reverse(stack_a);
	ft_operation_reverse(stack_b);
	ft_printf("rrr\n");
	return ;
}
