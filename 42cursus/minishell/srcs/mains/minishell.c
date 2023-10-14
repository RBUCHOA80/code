/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:06:46 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/14 16:24:38 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

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

int	ft_is_external(t_minishell *data)
{
	char		**paths;
	char		*pathname;
	struct stat	*buf;

	buf = ft_calloc(sizeof(buf), 1);
	paths = ft_split(ft_expand(data, "$PATH"), ':');
	while (*paths)
	{
		pathname = ft_strjoin(*paths++, "/");
		pathname = ft_strjoin(pathname, data->token->content);
		if (stat(pathname, buf) == RETURN_SUCCESS)
		{
			data->pathname = pathname;
			return (RETURN_SUCCESS);
		}
	}
	pathname = ft_strjoin("./", data->token->content);
	if (stat(pathname, buf) == RETURN_SUCCESS)
	{
		data->pathname = pathname;
		return (RETURN_SUCCESS);
	}
	return (RETURN_FAILURE);
}

char	**ft_get_argv(t_minishell *data)
{
	char	**argv;

	argv = ft_split(ft_get_cmd(data), ' ');
	return (argv);
}

int	ft_env_count(t_minishell *data)
{
	t_list	*temp;
	int		count;

	temp = data->env;
	count = 1;
	while (temp)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}

char	**ft_get_arge(t_minishell *data)
{
	t_list	*temp;
	char	**arge;
	int		arge_count;

	temp = data->env;
	arge_count = ft_env_count(data);
	arge = ft_calloc(sizeof(*arge), arge_count);
	while (temp)
	{
		*arge++ = ft_strdup(temp->content);
		temp = temp->next;
	}
	return (arge);
}

int	ft_exec_external(t_minishell *data)
{
	char	**argv;
	char	**arge;
	int		child;

	child = fork();
	if (child == RETURN_SUCCESS)
	{
		argv = ft_get_argv(data);
		arge = ft_get_arge(data);
		printf("\noutput = %i\n", execve(data->pathname, argv, arge));
	}
	wait(0);
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
			if (ft_is_builtin(data) == RETURN_SUCCESS)
				ft_exec_builtin(data);
			else if (ft_is_external(data) == RETURN_SUCCESS)
				ft_exec_external(data);
			else
				ft_print_error(data);
			while (data->token)
				data->token = data->token->next;
		}
		free(line);
	}
	return (RETURN_SUCCESS);
}
