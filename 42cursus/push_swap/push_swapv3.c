/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swapv3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:35:50 by ruchoa            #+#    #+#             */
/*   Updated: 2023/01/12 22:33:28 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	push_swap(t_list **stack_a, t_list **stack_b)
{
	int	len;
	int	mid;

	if (!(stack_a && stack_b))
		return ;
	(void) stack_b;
	while (ft_lstsize(*stack_a))
	{
		len = ft_lstsize(*stack_a);
		mid = len / 2;
		ft_printf("len = %d\n", len);
		ft_printf("mid = %d\n", mid);
		while (len--)
		{
			ft_printf("if (%d > %d)\n", *((int *)(*stack_a)->content), mid);
			if (*((int *)(*stack_a)->content) > mid)
			{
				if ((ft_lstsize(*stack_b) > 1) && (*((int *)(*stack_b)->content) > *((int *)(*stack_b)->next->content)))
				{
					pb(stack_a, stack_b);
					sb(stack_b);
				}
				else
					pb(stack_a, stack_b);
			}
			else if (ft_lstsize(*stack_a) > 1)
			{
				ra(stack_a);
			}
		}
	}
	ft_printf_stacks(*stack_a, *stack_b);
}

//*((int *)(*stack_a)->content)