/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:06:46 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/30 22:57:26 by ruchoa           ###   ########.fr       */
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

int	ft_construct_pipe(t_input *token)
{
	t_input	*temp;

	temp = token;
	while (temp)
	{
		if (temp->type == EMPTY)
			ft_fprintf(STDOUT, "%s "" ", RED);
		if (temp->type == APPEND)
			ft_fprintf(STDOUT, "%s >> ", RED);
		if (temp->type == TRUNC)
			ft_fprintf(STDOUT, "%s > ", GREEN);
		if (temp->type == INPUT)
			ft_fprintf(STDOUT, "%s < ", YELLOW);
		if (temp->type == PIPE)
			ft_fprintf(STDOUT, "%s | ", BLUE);
		if (temp->type == END)
			ft_fprintf(STDOUT, "%s ; ", PURPLE);
		if (temp->type == ARG)
			ft_fprintf(STDOUT, "%s%s", LBLUE, temp->content);
		if (temp->type == CMD)
			ft_fprintf(STDOUT, "%s%s", WHITE, temp->content);
		ft_fprintf(STDOUT, "%s ", NONE);
		temp = temp->next;
	}
	ft_fprintf(STDOUT, "\n");
	return (EXIT_SUCCESS);
}

int	ft_redirect(t_input *token)
{
	t_input	*temp;

	temp = token;
	while (temp->next)
	{
		if (temp->type == PIPE)
			ft_construct_pipe(token);
		temp = temp->next;
	}
	return (EXIT_FAILURE);
}

int	ft_check_token(t_minishell *data)
{
	if (data->token->type != CMD)
		return (EXIT_FAILURE);
	else
		return (EXIT_SUCCESS);
}

int	minishell(t_minishell *data)
{
	char	*user;

	user = ft_expand(data, "$USER");
	while (1)
	{
		if (ft_readline(data, user) == EXIT_FAILURE)
			continue ;
		while (data && data->token)
		{
			ft_redirect(data->token);
			if (ft_check_token(data))
				data->token = data->token->next;
			if (ft_is_builtin(data) == EXIT_SUCCESS)
				data->ret = ft_exec_builtin(data);
			else if (ft_is_bin(data) == EXIT_SUCCESS)
				data->ret = ft_exec_bin(data);
			else
				data->ret = ft_print_error(data);
			while (data->token && data->token->type >= ARG)
				data->token = data->token->next;
		}
	}
	return (EXIT_SUCCESS);
}
