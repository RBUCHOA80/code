/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:22:41 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/11 22:04:58 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

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

void	ft_exit2(int sig)
{
	if (sig == SIGQUIT)
		printf("(135)%i\n", sig);
	else
		printf("(B)%i\n", sig);
}

int	ft_init_signal(void)
{
	signal(SIGINT, &ft_exit);
	signal(SIGQUIT, &ft_exit2);
	return (EXIT_SUCCESS);
}

int	ft_init(t_minishell *data, char **arge)
{
	ft_init_data(data);
	ft_init_env(data, arge);
	ft_init_signal();
	return (EXIT_SUCCESS);
}
