/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:06:46 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/29 12:34:17 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_print_error(t_minishell *data)
{
	ft_putstr_fd("minishell: ", STDOUT);
	ft_putstr_fd(data->token->content, STDOUT);
	ft_putstr_fd(": command not found\n", STDOUT);
	while (data && data->token)
		data->token = data->token->next;
	return (UNKNOWN_COMMAND);
}

int	ft_construct_pipe(t_minishell *data)
{
	t_minishell	temp;

	temp = *data;
	while ((&temp)->token)
	{
		ft_putstr_fd(WHITE, STDOUT);
		if ((&temp)->token->type == CMD)
			ft_putstr_fd((&temp)->token->content, STDOUT);
		ft_putstr_fd(YELLOW, STDOUT);
		if ((&temp)->token->type == PIPE)
			ft_putstr_fd(" | ", STDOUT);
		ft_putstr_fd(" ", STDOUT);
		(&temp)->token = (&temp)->token->next;
	}
	ft_putstr_fd("\n", STDOUT);
	ft_putstr_fd(NONE, STDOUT);
	return (EXIT_SUCCESS);
}

int	ft_redirect(t_minishell *data)
{
	ft_construct_pipe(data);
	return (EXIT_FAILURE);
}

int	minishell(t_minishell *data)
{
	char	*user;

	user = ft_expand(data, "$USER");
	while (1)
	{
		if (ft_prepare_data(data, user) == EXIT_FAILURE)
			continue ;
		while (data && data->token)
		{
			ft_redirect(data);
			if (ft_is_builtin(data) == EXIT_SUCCESS)
				data->ret = ft_exec_builtin(data);
			else if (ft_is_bin(data) == EXIT_SUCCESS)
				data->ret = ft_exec_bin(data);
			else
				data->ret = ft_print_error(data);
			while (data->token && data->token->type != PIPE)
				data->token = data->token->next;
		}
	}
	return (EXIT_SUCCESS);
}
