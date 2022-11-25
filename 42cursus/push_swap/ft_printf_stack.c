/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:46:58 by ruchoa            #+#    #+#             */
/*   Updated: 2022/11/15 19:11:18 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_printf_stack(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		ft_printf("%p \t", stack);
		ft_printf("Node[%i] \t", i++);
		ft_printf("Content = %i \t", stack->content);
		ft_printf("Next = %p\n", stack->next);
		stack = stack->next;
	}	
}
