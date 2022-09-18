/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 22:20:25 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/17 23:46:54 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_o_swap(t_list **list)
{
	return ;
}

/*
sa (swap a):
Swap the first 2 elements at the top of list a.
Do nothing if there is only one or no elements.
*/
void	sa(t_list **list_a)
{
	ft_o_swap(list_a);
	return ;
}

/*
sb (swap b):
Swap the first 2 elements at the top of list b.
Do nothing if there is only one or no elements.
*/
void	sb(t_list **list_b)
{
	ft_o_swap(list_b);
	return ;
}

/*
ss :
sa and sb at the same time.
*/
void	ss(t_list **list_a, t_list **list_b)
{
	sa(list_a);
	sb(list_b);
	return ;
}
