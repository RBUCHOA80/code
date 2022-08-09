/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioda-si <dioda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 17:02:55 by dioda-si          #+#    #+#             */
/*   Updated: 2022/06/14 19:15:35 by dioda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*t1;

	t1 = malloc(sizeof(t_list));
	if (t1 == NULL)
		return (NULL);
	t1->content = content;
	t1->next = NULL;
	return (t1);
}
