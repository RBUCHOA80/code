/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:36:48 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/17 20:16:22 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_printf_list(t_list *list)
{
	int	content;
	int	i;

	i = 0;
	while (list)
	{
		content = *((int *)list->content);
		ft_printf("%p \t", list);
		ft_printf("Node[%i] \t", i++);
		ft_printf("Content = %i \t", content);
		ft_printf("Next = %p\n", list->next);
		list = list->next;
	}	
}
