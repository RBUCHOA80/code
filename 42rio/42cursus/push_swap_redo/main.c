/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:32:27 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/21 18:35:35 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_printf_lst(t_list *stack)
{
	while (stack)
	{
		ft_printf("\e[0;32m");
		ft_printf("%s ", stack->content);
		ft_printf("\e[0m");
		stack = stack->next;
	}
	return ;
}

void	ft_printf_tab(t_list *stack)
{
	ft_printf("\e[0;32m");
	while (stack)
	{
		ft_printf("%p ", stack);
		ft_printf("%s\t|", stack->content);
		ft_printf("\n");
		stack = stack->next;
	}
	ft_printf("               ---\t   ---\n");
	ft_printf("                a\t    b\n");
	ft_printf("\e[0m");
	return ;
}

int	main(int argc, char **argv)
{
	t_list	*stack;
	t_list	*content;

	if (!argc)
		return (1);
	stack = NULL;
	while (*++argv)
	{
		content = ft_lstnew(*argv);
		ft_lstadd_back(&stack, content);
	}
	ft_printf_tab(stack);
	return (0);
}
