/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:05:11 by vchastin          #+#    #+#             */
/*   Updated: 2023/03/04 18:09:44 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack	*stack, int flag)
{
	int	tmp;

	if (stack->size < 2)
		return ;
	tmp = stack->top->content;
	pop_node_top(stack);
	push_node_bottom(stack, tmp, 1);
	if (flag == 65)
		write(1, "ra\n", 3);
	else if (flag == 66)
		write(1, "rb\n", 3);
	return ;
}

void	rotate_all(t_stack	*a, t_stack	*b)
{
	rotate(a, 67);
	rotate(b, 67);
	write(1, "rr\n", 3);
}
