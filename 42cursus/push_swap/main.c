/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:53:35 by ruchoa            #+#    #+#             */
/*   Updated: 2023/01/15 07:31:40 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	main(int argc, char **argv)
{
	static t_list	*stk_a;
	static t_list	*stk_b;

	if (argc < 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (ft_argv_to_list(argv, &stk_a))
	{
		ft_content_from_template(stk_a, ft_create_template(stk_a));
		push_swap(&stk_a, &stk_b);
		ft_lstclear(&stk_a, free);
		ft_lstclear(&stk_b, free);
	}
	return (0);
}
