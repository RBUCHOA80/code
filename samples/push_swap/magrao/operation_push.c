/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 22:30:46 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/18 19:42:18 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_operation_push(t_list **list_a, t_list **list_b)
{
	void	*content;

	content = ft_pop_top(list_a);
	ft_push_top(list_b, content);
	return ;
}

/*
pa (push a):
Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.
*/
void	pa(t_list **list_b, t_list **list_a)
{
	ft_operation_push(list_b, list_a);
	return ;
}

/*
pb (push b):
Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.
*/
void	pb(t_list **list_a, t_list **list_b)
{
	ft_operation_push(list_a, list_b);
	return ;
}
