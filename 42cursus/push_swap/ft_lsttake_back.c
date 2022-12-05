/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsttake_front copy.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 23:49:17 by ruchoa            #+#    #+#             */
/*   Updated: 2022/12/05 18:42:07 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

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
		free(temp->next);
		temp->next = NULL;
		return (content);
	}
}
