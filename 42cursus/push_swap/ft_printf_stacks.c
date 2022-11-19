/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_stacks.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 10:06:41 by ruchoa            #+#    #+#             */
/*   Updated: 2022/11/19 17:50:06 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_size_tab(t_list *stack)
{
	int	count;

	if (!stack)
		return (0);
	count = 0;
	while (stack)
	{
		stack = stack->next;
		count++;
	}
	return (count);
}

void	ft_printf_stacks(t_list *stack_a, t_list *stack_b)
{
	static int	size_a;
	static int	size_b;

	size_a = ft_size_tab(stack_a);
	size_b = ft_size_tab(stack_b);
	while (size_a || size_b)
	{
		if (size_a >= size_b)
		{
			ft_printf("\e[0;32m%p %s", stack_a->content, stack_a->content);
			stack_a = stack_a->next;
			size_a--;
		}
		else
			ft_printf("\e[0;32m                  ");
		ft_printf(" | ");
		if (size_b >= size_a + 1)
		{
			ft_printf("\e[0;32m%s %s", stack_b->content, stack_b->content);
			stack_b = stack_b->next;
			size_b--;
		}
		ft_printf("\n");
	}
	ft_printf("               ---   ---\n                a  |  b\e[0m\n");
}
