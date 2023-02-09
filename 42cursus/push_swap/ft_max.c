/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 21:06:25 by ruchoa            #+#    #+#             */
/*   Updated: 2023/02/08 21:06:39 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_max(t_list *stk)
{
	int	max;

	max = 0;
	while (ft_lstsize(stk))
	{
		if (max < *((int *)stk->content))
			max = *((int *)stk->content);
		stk = stk->next;
	}
	return (max);
}
