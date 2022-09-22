/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:32:27 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/21 23:31:50 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_printf_tab(t_list *stack_a, t_list *stack_b)
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
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_list	*content;

	if (!argc)
		return (1);
	stack_a = ft_calloc(1, sizeof(stack_a));
	stack_b = ft_calloc(1, sizeof(stack_b));
	while (*++argv)
	{
		content = ft_lstnew(*argv);
		ft_lstadd_back(&stack_a, content);
	}
	ft_printf_tab(stack_a, stack_b);
	pb(&stack_a, &stack_b);
	ft_printf_tab(stack_a, stack_b);
	return (0);
}
