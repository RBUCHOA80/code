/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swapv3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:35:50 by ruchoa            #+#    #+#             */
/*   Updated: 2023/01/15 07:31:40 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	push_swap(t_list **stk_a, t_list **stk_b)
{
	int	len;
	int	mid;

	if (!(stk_a && stk_b))
		return ;
	(void) stk_b;
	while (ft_lstsize(*stk_a))
	{
		len = ft_lstsize(*stk_a);
		mid = len / 2;
		ft_printf("len = %d\n", len);
		ft_printf("mid = %d\n", mid);
		while (len--)
		{
			ft_printf("if (%d > %d)\n", *((int *)(*stk_a)->content), mid);
			if (*((int *)(*stk_a)->content) > mid)
			{
				if ((ft_lstsize(*stk_b) > 1) && (*((int *)(*stk_b)->content) > *((int *)(*stk_b)->next->content)))
				{
					pb(stk_a, stk_b);
					sb(stk_b);
				}
				else
					pb(stk_a, stk_b);
			}
			else if (ft_lstsize(*stk_a) > 1)
			{
				ra(stk_a);
			}
		}
	}
	ft_printf_stks(*stk_a, *stk_b);
}

//*((int *)(*stk_a)->content)