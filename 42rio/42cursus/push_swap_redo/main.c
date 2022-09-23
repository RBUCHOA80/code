/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:32:27 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/22 22:17:38 by ruchoa           ###   ########.fr       */
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

void	ft_printf_tab(t_list *stack_a, t_list *stack_b)
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
		if (size_a == i)
		{
			ft_printf("%p ", stack_a->content);
			ft_printf("%s ", stack_a->content);
			stack_a = stack_a->next;
			size_a--;
		}
		ft_printf("| ");
		if (size_b == i)
		{
			ft_printf("%s ", stack_b->content);
			ft_printf("%p ", stack_b->content);
			stack_b = stack_b->next;
			size_b--;
		}
		ft_printf("\n");
		i--;
	}
	ft_printf("               ---   ---\n");
	ft_printf("                a     b\n");
	ft_printf("\e[0m");
	return ;
}

/* void	ft_printf_tab(t_list *stack_a, t_list *stack_b)
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

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (!argc)
		return (1);
	stack_a = NULL;
	stack_b = NULL;
	while (*(++argv))
		ft_lstadd_back(&stack_a, ft_lstnew(*argv));
	ft_printf_tab(stack_a, stack_b);
	pb(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);
	ft_printf_tab(stack_a, stack_b);
	return (0);
}
