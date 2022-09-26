/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:32:27 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/26 13:04:11 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_fake_free(void *addr)
{
	if (addr)
		return ;
	return ;
}

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
	ft_printf_stacks(stack_a, stack_b);
	push_swap(&stack_a, &stack_b);
	ft_printf("\n");
	ft_printf_stacks(stack_a, stack_b);
	ft_lstclear(&stack_a, ft_fake_free);
	ft_lstclear(&stack_b, ft_fake_free);
	return (0);
}
