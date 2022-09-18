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

void	ft_push_base(t_list **list, void *content)
{
	t_list	*new_node;
	t_list	*temp;

	if (!(list && content))
		return ;
	new_node = ft_calloc(1, sizeof(*new_node));
	if (!new_node)
		return ;
	new_node->content = content;
	new_node->next = NULL;
	if (!*list)
	{
		*list = new_node;
		return ;
	}
	temp = ft_last_node(*list);
	temp->next = new_node;
	return ;
}
