/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_index.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 07:38:00 by ruchoa            #+#    #+#             */
/*   Updated: 2022/12/19 07:48:18 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_search_index(t_list *stack, int index)
{
	int	count;
	int	len;
	int	ret;

	len = ft_lstsize(stack);
	count = 0;
	while (stack && stack->next && *((int *)stack->content) != index)
	{
		stack = stack->next;
		count++;
	}
	ret = len - count;
	return (ret);
}
