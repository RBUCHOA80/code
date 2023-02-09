/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_index.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 21:05:13 by ruchoa            #+#    #+#             */
/*   Updated: 2023/02/08 21:05:44 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	ft_search_index(t_list *stk, int index, int range)
{
	int	dist;
	int	len;

	len = ft_lstsize(stk);
	dist = 0;
	while (ft_lstsize(stk) && (*((int *)stk->content) < (index - range)
			|| (index + range) < *((int *)stk->content)))
	{
		stk = stk->next;
		dist++;
	}
	if (dist > len / 2)
		return (-1 * (len - dist));
	else
		return (dist);
}
