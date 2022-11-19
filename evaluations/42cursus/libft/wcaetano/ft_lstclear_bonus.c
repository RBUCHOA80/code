/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 00:47:31 by root              #+#    #+#             */
/*   Updated: 2022/05/17 01:35:01 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;
	t_list	*l;

	p = *lst;
	while (p)
	{
		if (p->content)
			(*del)(p->content);
		if (p->next)
			l = p->next;
		else
			break ;
		free(p);
		p = l;
	}
	if (p)
		free(p);
	*lst = NULL;
}
