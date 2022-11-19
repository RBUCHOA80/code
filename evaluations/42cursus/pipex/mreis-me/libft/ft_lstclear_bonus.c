/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 07:18:51 by mreis-me          #+#    #+#             */
/*   Updated: 2022/06/03 07:57:57 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*prox;

	if (!*lst)
		return ;
	while (*lst)
	{
		prox = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = prox;
	}
	*lst = NULL;
}
