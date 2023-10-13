/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:06:46 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/12 21:39:58 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int	ft_print_tokens(t_minishell *data)
{
	t_input	*token;

	token = data->token;
	while (token && token->content && token->type)
	{
		printf("prev: %p ", token->prev);
		printf("addr: %p ", token);
		printf("content: %s ", token->content);
		printf("type: %i ", token->type);
		printf("next: %p\n", token->next);
		token = token->next;
	}
	return (RETURN_SUCCESS);
}

char	*ft_prompt(char *user)
{
	char	buff[PATH_MAX];
	char	*prompt;

	prompt = ft_strjoin(GREEN, user);
	prompt = ft_strjoin(prompt, "@minishell");
	prompt = ft_strjoin(prompt, WHITE);
	prompt = ft_strjoin(prompt, ":");
	prompt = ft_strjoin(prompt, RED);
	prompt = ft_strjoin(prompt, getcwd(buff, PATH_MAX));
	prompt = ft_strjoin(prompt, "\e[0m$ ");
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
		while (data && data->token)
		{
			if (ft_is_builtin(data->token) == RETURN_SUCCESS)
				ft_exec_builtin(data);
			else
				ft_print_error(data);
		}
	}
	return (RETURN_SUCCESS);
}
