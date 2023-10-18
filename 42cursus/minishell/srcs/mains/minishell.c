/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:06:46 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/17 21:28:42 by ruchoa           ###   ########.fr       */
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
	printf("minishell: %s: command not found\n", data->token->content);
	while (data && data->token)
		data->token = data->token->next;
	return (RETURN_SUCCESS);
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
		while (data && data->token)
		{
			if (ft_is_builtin(data) == RETURN_SUCCESS)
				ft_exec_builtin(data);
			else if (ft_is_external(data) == RETURN_SUCCESS)
				ft_exec_external(data);
			else
				ft_print_error(data);
			while (data->token)
				data->token = data->token->next;
		}
	}
	return (RETURN_SUCCESS);
}
