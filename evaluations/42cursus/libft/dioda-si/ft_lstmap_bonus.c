/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioda-si <dioda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 20:20:07 by dioda-si          #+#    #+#             */
/*   Updated: 2022/06/15 17:48:23 by dioda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*l1;
	t_list	*l2;

	l2 = 0;
	while (lst != NULL)
	{
		l1 = ft_lstnew((*f)(lst->content));
		if (l1 == NULL)
		{
			while (l2->next != NULL)
			{
				(*del)(l2->content);
				free(l2);
				l2 = l2->next;
			}
			l2 = NULL;
			return (NULL);
		}
		ft_lstadd_back(&l2, l1);
		lst = lst->next;
	}
	return (l2);
}
