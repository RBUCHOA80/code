/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:53:35 by ruchoa            #+#    #+#             */
/*   Updated: 2023/01/01 13:13:27 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	main(int argc, char **argv)
{
	static t_list	*stack_a;
	static t_list	*stack_b;

	if (argc < 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (ft_argv_to_list(argv, &stack_a))
	{
		ft_content_from_template(stack_a, ft_create_template(stack_a));
		push_swap(&stack_a, &stack_b);
		ft_lstclear(&stack_a, free);
		ft_lstclear(&stack_b, free);
	}
	return (0);
}
