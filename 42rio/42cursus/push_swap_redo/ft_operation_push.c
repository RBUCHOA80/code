/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operation_push.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 22:20:19 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/21 23:35:09 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_operation_push(t_list **stack_a, t_list **stack_b)
{
	void	*content;

	content = ft_lsttake_front(stack_a);
	ft_printf("%s <- content\n", (char *)content);
	ft_lstadd_front(stack_b, content);
	return ;
}

/* 
pa (push a):
Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.
 */
void	pa(t_list **stack_b, t_list **stack_a)
{
	ft_operation_push(stack_b, stack_a);
	ft_printf("pa\n");
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
	ft_printf("pb\n");
	return ;
}
