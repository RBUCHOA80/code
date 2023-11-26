/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:06:46 by ruchoa            #+#    #+#             */
/*   Updated: 2023/11/25 22:22:06 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_print_error(t_minishell *data)
{
	ft_fprintf(STDERR_FILENO, \
		"minishell: %s: command not found\n", \
			data->token->content);
	while (data && data->token)
		data->token = data->token->next;
	return (UNKNOWN_COMMAND);
}

/* int	ft_print_token_type(t_input *token)
{
	t_input	*temp;

	temp = token;
	while (temp)
	{
		if (temp->type == APPEND)
			ft_fprintf(STDOUT_FILENO, "%s APPEND (>>) ", RED);
		if (temp->type == TRUNC)
			ft_fprintf(STDOUT_FILENO, "%s TRUNC (>) ", GREEN);
		if (temp->type == INPUT)
			ft_fprintf(STDOUT_FILENO, "%s INPUT (<) ", YELLOW);
		if (temp->type == PIPE)
			ft_fprintf(STDOUT_FILENO, "%s PIPE (|) ", BLUE);
		if (temp->type == END)
			ft_fprintf(STDOUT_FILENO, "%s END (;) ", PURPLE);
		if (temp->type == ARG)
			ft_fprintf(STDOUT_FILENO, "%s ARG (%s)", LBLUE, temp->content);
		if (temp->type == CMD)
			ft_fprintf(STDOUT_FILENO, "%s CMD (%s)", WHITE, temp->content);
		ft_fprintf(STDOUT_FILENO, "%s ", NONE);
	}
	ft_fprintf(STDOUT_FILENO, "\n");
	return (EXIT_SUCCESS);
} */

int	ft_restore_fd(t_minishell *data)
{
	dup2(data->backup_fdin, STDIN_FILENO);
	dup2(data->backup_fdout, STDOUT_FILENO);
	return (EXIT_SUCCESS);
}

int	ft_next(t_minishell *data)
{
	while (data->token)
	{
		if (data->token->type == PIPE)
		{
			data->token = data->token->next;
			break ;
		}
		data->token = data->token->next;
	}
	return (EXIT_SUCCESS);
}

int	ft_wait(t_minishell *data)
{
	while (data->pipe_count + 1)
		waitpid(data->child_pid[data->pipe_count--], &data->ret, 0);
	data->ret /= 256;
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
			if (ft_has_pipe(data) == EXIT_SUCCESS)
				ft_pipe_prepare(data);
			if (ft_is_builtin(data) == EXIT_SUCCESS)
				data->ret = ft_exec_builtin(data);
			else if (ft_is_bin(data) == EXIT_SUCCESS)
				data->ret = ft_exec_bin(data);
			else
				data->ret = ft_print_error(data);
			ft_restore_fd(data);
			ft_next(data);
		}
		ft_wait(data);
	}
	return (EXIT_SUCCESS);
}
