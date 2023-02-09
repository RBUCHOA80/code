/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inorder.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 21:05:56 by ruchoa            #+#    #+#             */
/*   Updated: 2023/02/08 21:06:14 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_inorder(t_list *stk, int max)
{
	if (!(stk && max))
		return (1);
	if (*((int *)ft_lstlast(stk)->content) != max)
		return (0);
	while (ft_lstsize(stk) >= 2)
	{
		if ((*(int *)stk->next->content - *(int *)stk->content) != 1)
			return (0);
		stk = stk->next;
	}
	return (1);
}
