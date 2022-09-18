/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_reverse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 22:23:03 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/18 19:32:24 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_operation_reverse(t_list **list)
{
	void	*content;

	
	content = ft_pop_base(list);
	ft_push_top(list, content);
	return ;
}

/*
rra (reverse rotate a):
Shift down all elements of stack a by 1.
The last element becomes the first one.
*/
void	rra(t_list **list_a)
{
	ft_operation_reverse(list_a);
	return ;
}

/*
rrb (reverse rotate b):
Shift down all elements of stack b by 1.
The last element becomes the first one.
*/
void	rrb(t_list **list_b)
{
	ft_operation_reverse(list_b);
	return ;
}

/*
rrr :
rra and rrb at the same time.
*/
void	rrr(t_list **list_a, t_list **list_b)
{
	rrb(list_a);
	rrb(list_b);
	return ;
}
