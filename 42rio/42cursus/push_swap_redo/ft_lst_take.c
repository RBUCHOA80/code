/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_take.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 23:49:17 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/21 23:36:09 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_lsttake_front(t_list **stack)
{
	void	*content;

	content = (*stack)->content;
	*stack = (*stack)->next;
	return (content);
}

void	*ft_lsttake_back(t_list **stack)
{
	t_list	*temp;
	void	*content;

	while ((*stack)->next->next)
		(*stack) = (*stack)->next;
	temp = (*stack)->next;
	content = (*stack)->content;
	free(temp);
	return (content);
}
