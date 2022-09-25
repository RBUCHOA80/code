/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_take.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 23:49:17 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/24 20:16:02 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_lsttake_front(t_list **stack)
{
	void	*content;

	if (!(stack && *stack))
		return (NULL);
	content = (*stack)->content;
	*stack = (*stack)->next;
	return (content);
}

void	*ft_lsttake_back(t_list **stack)
{
	t_list	*temp;
	void	*content;

	if (!(stack && (*stack)))
		return (NULL);
	if (!((*stack)->next))
		return (ft_lsttake_front(stack));
	else
	{
		temp = (*stack);
		while ((temp)->next->next)
			(temp) = (temp)->next;
		content = (temp)->next->content;
		(temp)->next = NULL;
		temp = (*stack)->next;
		free(temp);
		return (content);
	}
}