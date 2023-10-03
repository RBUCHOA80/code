/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec_builtin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:59:01 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/02 23:40:27 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./minishell.h"

int	ft_echo(char *command)
{
	(void)command;
	printf("ft_echo()\n");
	return (0);
}

int	ft_cd(t_minishell *data, char *command)
{
	(void)data;
	(void)command;
	printf("ft_cd()\n");
	return (0);
}

int	ft_pwd(void)
{
	printf("ft_pwd()\n");
	return (0);
}

int	ft_export(t_minishell *data, char *command)
{
	(void)data;
	(void)command;
	printf("ft_export()\n");
	return (0);
}

int	ft_unset(t_minishell *data, char *command)
{
	(void)data;
	(void)command;
	printf("ft_unset()\n");
	return (0);
}

int	ft_exit(t_minishell *data, char *command)
{
	(void)data;
	(void)command;
	printf("ft_exit()\n");
	return (0);
}

int	ft_exec_builtin(t_minishell *data, char *command)
{
	int	ret;

	ret = 0;
	if (ft_strncmp(command, "echo ", 5) == 0)
		ret = ft_echo(command);
	else if (ft_strncmp(command, "cd ", 3) == 0)
		ret = ft_cd(data, command);
	else if (ft_strncmp(command, "pwd ", 4) == 0)
		ret = ft_pwd();
	else if (ft_strncmp(command, "env ", 4) == 0)
		ft_env(data->env);
	else if (ft_strncmp(command, "export ", 7) == 0)
		ft_export(data, command);
	else if (ft_strncmp(command, "unset ", 6) == 0)
		ft_unset(data, command);
	else if (ft_strncmp(command, "exit ", 5) == 0)
		ft_exit(data, command);
	return (ret);
}
