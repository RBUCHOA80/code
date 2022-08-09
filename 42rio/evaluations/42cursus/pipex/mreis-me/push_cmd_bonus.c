/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_cmd_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:24:00 by mreis-me          #+#    #+#             */
/*   Updated: 2022/07/24 18:40:42 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

char	**get_cmd(char *args)
{
	char	**cmd;
	char	**temp;
	int		index;

	index = 0;
	temp = NULL;
	cmd = split_cmd(args, ' ');
	while (cmd[index])
		index++;
	temp = (char **)malloc(index * sizeof(char *));
	index = 0;
	while (cmd[index])
	{
		temp[index] = trim_cmd(cmd[index], "'\"");
		free(cmd[index]);
		cmd[index] = temp[index];
		index++;
	}
	return (cmd);
}

char	**get_path(char *envp[])
{
	int		i;
	char	**paths;

	i = 0;
	while (envp[i])
	{
		if (!ft_strncmp(envp[i], "PATH=", 5))
		{
			paths = ft_split(&envp[i][5], ':');
			if (paths == NULL)
			{
				free_matrix(paths);
				break ;
			}
			return (paths);
		}
		i++;
	}
	msg_error("Error: no PATH", "", 2);
	return (NULL);
}

void	exec_cmd(char **paths, char **cmd, int index)
{
	char	*path;

	path = ft_strjoin(paths[index], "/");
	path = ft_strjoin(path, cmd[0]);
	if (access(path, F_OK | X_OK) == 0)
		if (execve(path, cmd, paths) == -1)
			msg_perror("Error", EXIT_FAILURE);
	free(path);
}

void	push_cmd(char *args, char *envp[])
{
	char	**paths;
	char	**cmd;
	int		index;

	index = 0;
	if (access(args, F_OK | X_OK) == 0)
	{
		cmd = get_cmd(args);
		if (execve(cmd[0], cmd, envp) == -1)
			msg_perror("Error", EXIT_FAILURE);
	}
	cmd = get_cmd(args);
	if (access(cmd[0], F_OK | X_OK) == 0)
	{
		if (execve(cmd[0], cmd, envp) == -1)
			msg_perror("Error", EXIT_FAILURE);
	}
	paths = get_path(envp);
	while (paths[index])
	{
		exec_cmd(paths, cmd, index);
		index++;
	}
	msg_error("command not found: ", cmd[0], 2);
}
