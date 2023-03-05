/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:57:47 by vchastin          #+#    #+#             */
/*   Updated: 2023/03/04 17:58:37 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	pop_node_bottom(t_stack *stack)
{
	t_node	*popped;
	int		aux;

	if (stack->bottom == NULL)
		return (0);
	aux = stack->bottom->content;
	popped = stack->bottom->prev;
	free(stack->bottom);
	if (popped == NULL)
	{
		stack->top = popped;
		stack->bottom = popped;
		stack->size--;
		return (aux);
	}
	stack->bottom = popped;
	popped->next = NULL;
	stack->size--;
	return (aux);
}

int	pop_node_top(t_stack *stack)
{
	t_node	*popped;
	int		aux;

	if (stack->top == NULL)
		return (0);
	popped = stack->top->next;
	aux = stack->top->content;
	free(stack->top);
	if (popped == NULL)
	{
		stack->top = popped;
		stack->bottom = popped;
		stack->size--;
		return (aux);
	}
	stack->top = popped;
	popped->prev = NULL;
	stack->size--;
	return (aux);
}
