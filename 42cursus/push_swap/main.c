/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:53:35 by ruchoa            #+#    #+#             */
/*   Updated: 2022/12/19 20:00:01 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	main(int argc, char **argv)
{
	static t_list	*stack_a;
	static t_list	*stack_b;

	if (argc < 2)
		return (1);
	while (*(++argv))
		ft_lstadd_back(&stack_a, ft_lstnew(ft_str2int(*argv)));
	ft_content2index(stack_a, ft_create_template(stack_a));
	push_swap(&stack_a, &stack_b);
	ft_lstclear(&stack_a, free);
	ft_lstclear(&stack_b, free);
	return (0);
}
