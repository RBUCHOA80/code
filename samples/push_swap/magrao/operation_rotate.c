/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 22:24:22 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/18 19:32:24 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_operation_rotate(t_list **list)
{
	void	*content;

	content = ft_pop_top(list);
	ft_push_base(list, content);
	return ;
}

/*
ra (rotate a):
Shift up all elements of stack a by 1.
The first element becomes the last one.
*/
void	ra(t_list **list_a)
{
	ft_operation_rotate(list_a);
	return ;
}

/*
rb (rotate b):
Shift up all elements of stack b by 1.
The first element becomes the last one.
*/
void	rb(t_list **list_b)
{
	ft_operation_rotate(list_b);
	return ;
}

/*
rr :
ra and rb at the same time.
*/
void	rr(t_list **list_a, t_list **list_b)
{
	ra(list_a);
	ra(list_b);
	return ;
}
