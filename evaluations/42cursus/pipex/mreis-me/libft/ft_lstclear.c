/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <falecommarlonreis@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 07:18:51 by mreis-me          #+#    #+#             */
/*   Updated: 2022/05/26 23:33:00 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*prox;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		prox = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = prox;
	}
	*lst = NULL;
}
