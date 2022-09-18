/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:36:26 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/17 20:16:22 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_pop_base(t_list **list)
{
	t_list	*temp;
	void	*content;

	if (!(list && *list))
		return (NULL);
	if (!((*list)->next))
	{
		temp = *list;
		content = (*list)->content;
		free(*list);
		*list = NULL;
		return (content);
	}
	while (temp->next->next)
		temp = temp->next;
	content = temp->next->content;
	free(temp->next);
	temp->next = NULL;
	return (content);
}
