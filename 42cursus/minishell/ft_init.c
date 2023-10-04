/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:22:41 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/03 23:10:26 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./minishell.h"

int	ft_init_data(t_minishell *data)
{
	data->in = dup(STDIN);
	data->out = dup(STDOUT);
	data->exit = EXIT_SUCCESS;
	return (EXIT_SUCCESS);
}

int	ft_init_env(t_minishell *data, char **arge)
{
	while (*arge)
		ft_lstadd_back(&data->env, ft_lstnew(ft_strdup(*arge++)));
	return (EXIT_SUCCESS);
}

int	ft_init_signal(void)
{
	//signal(SIGINT, ft_signal);
	signal(SIGQUIT, exit);
	return (EXIT_SUCCESS);
}

int	ft_init(t_minishell *data, char **arge)
{
	ft_init_data(data);
	ft_init_env(data, arge);
	ft_init_signal();
	return (EXIT_SUCCESS);
}
