/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:06:46 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/29 21:50:09 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_print_error(t_minishell *data)
{
	ft_fprintf(data->fdout, \
		"minishell: %s: command not found\n", \
			data->token->content);
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
		if ((&temp)->token->type == CMD)
			ft_fprintf(data->fdout, "%s%s", WHITE, (&temp)->token->content);
		if ((&temp)->token->type == PIPE)
			ft_fprintf(data->fdout, "%s | ", YELLOW);
		ft_fprintf(data->fdout, " ");
		(&temp)->token = (&temp)->token->next;
	}
	ft_fprintf(data->fdout, "%s\n", NONE);
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
