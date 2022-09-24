/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:32:27 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/24 14:55:56 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	void	*content;

	if (!argc)
		return (1);
	stack_a = NULL;
	stack_b = NULL;
	while (*(++argv))
		ft_lstadd_back(&stack_a, ft_lstnew(*argv));
	ft_printf_stacks(stack_a, stack_b);
	push_swap(&stack_a, &stack_b);
	ft_printf("\n");
	ft_printf_stacks(stack_a, stack_b);
	content = ft_lsttake_front(&stack_a);
	ft_printf("%s\n", content);
	content = ft_lsttake_back(&stack_b);
	ft_printf("%s\n", content);
	ft_printf_stacks(stack_a, stack_b);
	ft_printf_stacks(stack_a, stack_b);
	return (0);
}
