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

void	ft_push_top(t_list **list, void *content)
{
	t_list	*new_node;

	if (!(list && content))
		return ;
	new_node = ft_calloc(1, sizeof(*new_node));
	if (!new_node)
		return ;
	new_node->content = content;
	new_node->next = *list;
	*list = new_node;
	return ;
}

void	*ft_pop_top(t_list **list)
{
	t_list	*temp;
	void	*content;

	if (!(list && *list))
		return (NULL);
	content = (*list)->content;
	temp = *list;
	*list = (*list)->next;
	free(temp);
	return (content);
}

t_list	*ft_last_node(t_list *list)
{
	if (!list)
		return (NULL);
	while (list->next)
		list = list->next;
	return (list);
}

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

t_list	*ft_str_to_list(char **str)
{
	t_list	*list;
	int		*new_content;

	list = NULL;
	while (*str)
	{
		// list = ft_calloc(1, sizeof(*list));
		new_content = ft_calloc(1, sizeof(*new_content));
		*new_content = ft_atoi(*str);
		ft_push_base(&list, new_content);
		str++;
	}
	return (list);
}
