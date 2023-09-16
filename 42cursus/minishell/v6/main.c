/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:06:55 by ruchoa            #+#    #+#             */
/*   Updated: 2023/09/12 21:15:48 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./minishell.h"

t_sig	g_signal;

int	ft_printf_list(t_list	*lst)
{
	int	ret;
	int	i;

	i = 0;
	ret = 0;
	while (lst)
	{
		ret += printf("->%i %s\n", i++, (char *)lst->content);
		lst = lst->next;
	}
	return (ret);
}

int	main(int argc, char **argv, char **arge)
{
	t_minishell	data;

	(void)argc;
	(void)argv;
	printf("main.c\n");
	ft_init(&data, arge);
	minishell();
	ft_printf_list(data.env);
	return (SUCCESS);
}
