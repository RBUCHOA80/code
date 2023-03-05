/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:06:18 by vchastin          #+#    #+#             */
/*   Updated: 2023/03/04 18:09:34 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_stack *stack, int flag)
{
	int	tmp;

	if (stack->size < 2)
		return ;
	tmp = stack->bottom->content;
	pop_node_bottom(stack);
	push_node_top(stack, tmp);
	if (flag == 65)
		write(1, "rra\n", 4);
	else if (flag == 66)
		write(1, "rrb\n", 4);
	return ;
}

void	reverse_rotate_all(t_stack	*a, t_stack	*b)
{
	reverse_rotate(a, 67);
	reverse_rotate(b, 67);
	write(1, "rrr\n", 4);
}
