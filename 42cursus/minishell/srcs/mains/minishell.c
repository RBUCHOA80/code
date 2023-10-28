/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:06:46 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/28 00:46:55 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

char	*ft_prompt(char *user)
{
	char	buf[PATH_MAX];
	char	*prompt;

	prompt = ft_strjoin(GREEN, user);
	prompt = ft_strjoin(prompt, "@minishell");
	prompt = ft_strjoin(prompt, WHITE);
	prompt = ft_strjoin(prompt, ":");
	prompt = ft_strjoin(prompt, RED);
	prompt = ft_strjoin(prompt, getcwd(buf, PATH_MAX));
	prompt = ft_strjoin(prompt, WHITE);
	prompt = ft_strjoin(prompt, "$ ");
	return (prompt);
}

int	ft_print_error(t_minishell *data)
{
	ft_putstr_fd("minishell: ", 1);
	ft_putstr_fd(data->token->content, 1);
	ft_putstr_fd(": command not found\n", 1);
	while (data && data->token)
		data->token = data->token->next;
	return (127);
}

int	ft_pipe_count(char *line)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (line[i])
	{
		if (line[i] == '|')
			count++;
		i++;
	}
	return (count);
}

int	minishell(t_minishell *data)
{
	char	*line;
	char	*user;

	user = ft_expand(data, "$USER");
	while (1)
	{
		line = readline(ft_prompt(user));
		if (ft_tokenize(data, line) == RETURN_FAILURE)
			ft_exit(data);
		ft_history(line);
		data->pipe_count = ft_pipe_count(line);
		while (data && data->token)
		{
			if (data->token->type == PIPE)
			{
				ft_pipe(data);
				data->token = data->token->next;
			}
			if (ft_is_builtin(data) == RETURN_SUCCESS)
				data->ret = ft_exec_builtin(data);
			else if (ft_is_external(data) == RETURN_SUCCESS)
				data->ret = ft_exec_external(data);
			else
				data->ret = ft_print_error(data);
			while (data->token && data->token->type != PIPE)
				data->token = data->token->next;
		}
	}
	return (RETURN_SUCCESS);
}
