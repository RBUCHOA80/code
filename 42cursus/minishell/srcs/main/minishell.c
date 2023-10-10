/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:06:46 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/09 22:27:25 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

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
	return (EXIT_SUCCESS);
}

int	ft_print_error(t_minishell *data)
{
	printf("minishell: %s: command not found\n", data->token->content);
	while (data && data->token)
		data->token = data->token->next;
	return (EXIT_SUCCESS);
}

int	minishell(t_minishell *data)
{
	char	buff[PATH_MAX];
	char	*line;

	while (1)
	{
		printf("%s%s%s%s%s", GREEN, "42@MINISHELL", WHITE, ":", RED);
		line = readline(ft_strjoin(getcwd(buff, PATH_MAX), "\e[0m$ "));
		ft_tokenize(data, line);
		while (data && data->token)
		{
			if (ft_is_builtin(data->token))
				ft_exec_builtin(data);
			else
				ft_print_error(data);
		}
	}
	return (EXIT_SUCCESS);
}
