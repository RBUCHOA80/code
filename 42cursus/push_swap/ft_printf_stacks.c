/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_stacks.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 10:06:41 by ruchoa            #+#    #+#             */
/*   Updated: 2022/12/05 19:21:17 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	ft_printf_stacks(t_list *stack_a, t_list *stack_b)
{
	int	size_a;
	int	size_b;

	size_a = ft_lst_size(stack_a);
	size_b = ft_lst_size(stack_b);
	while (size_a || size_b)
	{
		if (size_a >= size_b)
		{
			ft_printf("%p %d", stack_a->content, *((int *)stack_a->content));
			stack_a = stack_a->next;
			size_a--;
		}
		else
			ft_printf("                  ");
		ft_printf(" | ");
		if (size_b >= size_a + 1)
		{
			ft_printf("%d %p", *((int *)stack_b->content), stack_b->content);
			stack_b = stack_b->next;
			size_b--;
		}
		ft_printf("\n");
	}
	ft_printf("               ---   ---\n                a  |  b\e[0m\n\n");
}
