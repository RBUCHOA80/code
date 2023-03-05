/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:49:40 by vchastin          #+#    #+#             */
/*   Updated: 2023/03/04 18:12:52 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	free_stack(t_stack *stack)
{
	t_node	*aux;
	t_node	*new_node;

	new_node = stack->top;
	while (new_node)
	{
		if (new_node->next)
			aux = new_node->next;
		else
			aux = NULL;
		free(new_node);
		if (aux)
			new_node = aux;
		else
			break ;
	}
	free(stack);
	return (0);
}

void	free_array(char **tab, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

int	free_stacks(t_stack *stack_a, t_stack *stack_b)
{
	free_stack(stack_a);
	free_stack(stack_b);
	exit(0);
	return (0);
}
