/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:46:58 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/15 21:30:43 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_printf_stack(t_stack *stack)
{
	int	i;

	i = 0;
	while (1)
	{
		ft_printf("%p \t", &stack[i]);
		ft_printf("Node[%i] \t", i);
		ft_printf("Content = %i \t", stack[i].content);
		ft_printf("Next = %p\n", stack[i].next);
		if (!stack[i].next)
			break ;
		i++;
	}	
}
