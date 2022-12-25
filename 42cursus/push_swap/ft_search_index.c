/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_index.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 07:38:00 by ruchoa            #+#    #+#             */
/*   Updated: 2022/12/25 11:33:12 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_search_index(t_list *stack, int index)
{
	int	dist;
	int	len;

	len = ft_lstsize(stack);
	dist = 0;
	while (stack && stack->next && *((int *)stack->content) != index)
	{
		stack = stack->next;
		dist++;
	}
	if (dist > len / 2)
		return (-1 * (len - dist));
	else
		return (dist);
}
