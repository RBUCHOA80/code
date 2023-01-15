/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsttake_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 23:49:17 by ruchoa            #+#    #+#             */
/*   Updated: 2023/01/15 07:31:40 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	*ft_lsttake_back(t_list **stk)
{
	t_list	*temp;
	void	*content;

	if (!(stk && (*stk)))
		return (NULL);
	if (!((*stk)->next))
		return (ft_lsttake_front(stk));
	else
	{
		temp = (*stk);
		while ((temp)->next->next)
			(temp) = (temp)->next;
		content = (temp)->next->content;
		free(temp->next);
		temp->next = NULL;
		return (content);
	}
}
