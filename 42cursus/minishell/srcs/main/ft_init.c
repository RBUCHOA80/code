/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:22:41 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/12 12:37:06 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_init_data(t_minishell *data)
{
	data->in = dup(STDIN);
	data->out = dup(STDOUT);
	return (RETURN_SUCCESS);
}

int	ft_init_env(t_minishell *data, char **arge)
{
	while (*arge)
		ft_lstadd_back(&data->env, ft_lstnew(ft_strdup(*arge++)));
	return (RETURN_SUCCESS);
}

//"CTRL+C" = SIGINT  -> ft_sigint()
//"CTRL+\" = SIGQUIT -> ft_sigquit()

int	ft_init_signal(void)
{
	signal(SIGINT, &ft_sigint);
	signal(SIGQUIT, &ft_sigquit);
	return (RETURN_SUCCESS);
}

int	ft_init(t_minishell *data, char **arge)
{
	ft_init_data(data);
	ft_init_env(data, arge);
	ft_init_signal();
	return (RETURN_SUCCESS);
}
