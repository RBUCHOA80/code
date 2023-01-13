/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:35:50 by ruchoa            #+#    #+#             */
/*   Updated: 2023/01/12 23:19:09 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	push_swap(t_list **stack_a, t_list **stack_b)
{
	int	size;
	int	mid;
	int	range;

	if (!(stack_a && stack_b))
		return ;
	(void) stack_b;
	mid = ft_lstsize(*stack_a) / 2;
	range = 0;
	while (ft_lstsize(*stack_a) > 0)
	{
		size = ft_lstsize(*stack_a);
		while (size-- > 0)
		{
			if ((mid) <= *((int *)(*stack_a)->content) && *((int *)(*stack_a)->content) <= (mid + range))
				pb(stack_a, stack_b);
			else if ((mid - range) <= *((int *)(*stack_a)->content) && *((int *)(*stack_a)->content) <= mid)
			{
				pb(stack_a, stack_b);
				rb(stack_b);
			}
			else if (ft_lstsize(*stack_a) > 1)
				ra(stack_a);
			//ft_printf_stacks(*stack_a, *stack_b);
		}
		range++;
	}
	while (ft_lstsize(*stack_b) > 0)
		pa(stack_b, stack_a);
}
