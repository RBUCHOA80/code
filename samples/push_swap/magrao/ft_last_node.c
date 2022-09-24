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

t_list	*ft_last_node(t_list *list)
{
	if (!list)
		return (NULL);
	while (list->next)
		list = list->next;
	return (list);
}
