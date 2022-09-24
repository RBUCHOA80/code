/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 22:20:25 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/20 19:03:45 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_operation_swap(t_list **list)
{
	void	*content0;
	void	*content1;

	content0 = ft_pop_top(list);
	content1 = ft_pop_top(list);
	ft_push_top(list, content1);
	ft_push_top(list, content0);
	return ;
}

/*
sa (swap a):
Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements.
*/
void	sa(t_list **list_a)
{
	ft_operation_swap(list_a);
	return ;
}

/*
sb (swap b):
Swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements.
*/
void	sb(t_list **list_b)
{
	ft_operation_swap(list_b);
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
