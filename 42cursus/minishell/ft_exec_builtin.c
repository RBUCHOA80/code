/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec_builtin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:59:01 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/03 22:46:23 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./minishell.h"

int	ft_echo(char **command)
{
	(void)command;
	printf("ft_echo()\n");
	return (EXIT_SUCCESS);
}

int	ft_export(t_minishell *data, char *command)
{
	(void)data;
	(void)command;
	printf("ft_export()\n");
	return (EXIT_SUCCESS);
}

int	ft_unset(t_minishell *data, char *command)
{
	(void)data;
	(void)command;
	printf("ft_unset()\n");
	return (EXIT_SUCCESS);
}

int	ft_exec_builtin(t_minishell *data, char *line)
{
	char **command;
	int	ret;

	command = ft_split(line, ' ');	
	ret = 0;
	if (ft_strncmp(*command, "echo", 5) == 0)
		ret = ft_echo(command);
	else if (ft_strncmp(*command, "cd", 3) == 0)
		ret = ft_cd(data, command);
	else if (ft_strncmp(*command, "pwd", 4) == 0)
		ret = ft_pwd();
	else if (ft_strncmp(*command, "env", 4) == 0)
		ft_env(data->env);
	else if (ft_strncmp(*command, "export", 7) == 0)
		ft_export(data, *command);
	else if (ft_strncmp(*command, "unset", 6) == 0)
		ft_unset(data, *command);
	else if (ft_strncmp(*command, "exit", 5) == 0)
		ft_exit(ret);
	return (ret);
}