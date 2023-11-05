/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:06:46 by ruchoa            #+#    #+#             */
/*   Updated: 2023/11/03 22:04:00 by ruchoa           ###   ########.fr       */
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

int	ft_print_token_type(t_input *token)
{
	t_input	*temp;

	temp = token;
	while (temp)
	{
		if (temp->type == APPEND)
			ft_fprintf(STDOUT, "%s APPEND (>>) ", RED);
		if (temp->type == TRUNC)
			ft_fprintf(STDOUT, "%s TRUNC (>) ", GREEN);
		if (temp->type == INPUT)
			ft_fprintf(STDOUT, "%s INPUT (<) ", YELLOW);
		if (temp->type == PIPE)
			ft_fprintf(STDOUT, "%s PIPE(|) ", BLUE);
		if (temp->type == END)
			ft_fprintf(STDOUT, "%s END (;) ", PURPLE);
		if (temp->type == ARG)
			ft_fprintf(STDOUT, "%sARG(%s)", LBLUE, temp->content);
		if (temp->type == CMD)
			ft_fprintf(STDOUT, "%sCMD(%s)", WHITE, temp->content);
		ft_fprintf(STDOUT, "%s ", NONE);
	}
	ft_fprintf(STDOUT, "\n");
	return (EXIT_SUCCESS);
}

int	ft_has_pipe(t_minishell *data)
{
	t_input	*temp;

	temp = data->token;
	while (temp)
	{
		if (temp->type == PIPE)
			return (EXIT_SUCCESS);
		temp = temp->next;
	}
	return (EXIT_FAILURE);
}

int	ft_count_pipe(t_minishell *data)
{
	t_input	*temp;

	temp = data->token;
	data->pipe_count = 0;
	while (temp)
	{
		if (temp->type == PIPE)
			data->pipe_count++;
		temp = temp->next;
	}
	return (data->pipe_count);
}

int	ft_pipe_init(t_minishell *data)
{
	int	i;

	if (data->pipe_matrix == NULL && ft_count_pipe(data))
	{
		data->pipe_matrix = ft_calloc(data->pipe_count + 1, sizeof(int *));
		i = 0;
		while (i < data->pipe_count)
		{
			data->pipe_matrix[i] = ft_calloc(2, sizeof(int));
			pipe(data->pipe_matrix[i]);
			ft_fprintf(STDERR, "addr = %p -> fd[%i][0] = %i\n", &data->pipe_matrix[i][0], i, data->pipe_matrix[i][0]);
			ft_fprintf(STDERR, "addr = %p -> fd[%i][1] = %i\n", &data->pipe_matrix[i][1], i, data->pipe_matrix[i][1]);
			i++;
		}
		return (EXIT_SUCCESS);
	}
	return (EXIT_FAILURE);
}

int	ft_exec_pipe(t_minishell *data)
{
	(void)data;
	ft_fprintf(STDERR, "data->seq = %i\n", data->seq);
	data->seq++;
	dup2(5 + data->seq, STDIN);
	dup2(6 + data->seq, STDOUT);
	close(5 + data->seq);
	close(6 + data->seq);
	return (EXIT_SUCCESS);
}

int	ft_next(t_minishell *data)
{
	while (data->token && data->token->type >= ARG)
		data->token = data->token->next;
	if (data && data->token && data->token->type == PIPE)
		data->token = data->token->next;
	// dup2(data->fdout, STDOUT);
	// if (data && data->token == NULL)
	// 	dup2(data->fdin, STDIN);
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
			if (ft_pipe_init(data) == EXIT_SUCCESS)
				ft_exec_pipe(data);
			if (ft_is_builtin(data) == EXIT_SUCCESS)
				data->ret = ft_exec_builtin(data);
			else if (ft_is_bin(data) == EXIT_SUCCESS)
				data->ret = ft_exec_bin(data);
			else
				data->ret = ft_print_error(data);
			ft_next(data);
		}
	}
	return (EXIT_SUCCESS);
}
