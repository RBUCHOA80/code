/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:06:55 by ruchoa            #+#    #+#             */
/*   Updated: 2023/09/18 18:03:24 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./minishell.h"

int	ft_printf_list(t_list *lst)
{
	int	ret;
	int	i;

	i = 0;
	ret = 0;
	while (lst && i < 10)
	{
		ret += printf("->%i %s\n", i++, (char *)lst->content);
		lst = lst->next;
	}
	ret += printf("...\n");
	return (ret);
}

int	main(int argc, char **argv, char **arge)
{
	t_minishell	data;

	(void)argc;
	(void)argv;
	ft_init(&data, arge);
	minishell();
	ft_printf_list(data.env);
	return (SUCCESS);
}
