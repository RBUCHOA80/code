/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_stacks.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 10:06:41 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/24 10:46:22 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_size_tab(t_list *stack)
{
	int	count;

	count = 0;
	while (stack)
	{
		stack = stack->next;
		count++;
	}
	return (count);
}

void	ft_printf_tab(t_list **stack, int *size, int i)
{
	if (*size == i)
	{
		ft_printf("%p ", (*stack)->content);
		ft_printf("%s ", (*stack)->content);
		(*stack) = (*stack)->next;
		(*size)--;
	}
	return ;
}

void	ft_printf_stacks(t_list *stack_a, t_list *stack_b)
{
	int	size_a;
	int	size_b;
	int	i;

	size_a = ft_size_tab(stack_a);
	size_b = ft_size_tab(stack_b);
	i = size_a;
	if (size_a < size_b)
		i = size_b;
	ft_printf("\e[0;32m");
	while (i)
	{
		ft_printf_tab(&stack_a, &size_a, i);
		ft_printf("| ");
		ft_printf_tab(&stack_b, &size_b, i);
		ft_printf("\n");
		i--;
	}
	ft_printf("               ---   ---\n");
	ft_printf("                a     b\n");
	ft_printf("\e[0m");
	return ;
}

/* void	ft_printf_stacks(t_list *stack_a, t_list *stack_b)
{
	ft_printf("\e[0;32m");
	while (stack_a || stack_b)
	{
		if (stack_a)
		{
			ft_printf("%p ", stack_a);
			ft_printf("%s ", stack_a->content);
			stack_a = stack_a->next;
		}
		ft_printf("| ");
		if (stack_b)
		{
			ft_printf("%s ", stack_b->content);
			ft_printf("%p ", stack_b);
			stack_b = stack_b->next;
		}
		ft_printf("\n");
	}
	ft_printf("               ---   ---\n");
	ft_printf("                a     b\n");
	ft_printf("\e[0m");
	return ;
} */
