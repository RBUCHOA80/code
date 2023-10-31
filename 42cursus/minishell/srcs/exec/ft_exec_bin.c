/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec_bin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:55:24 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/30 21:55:25 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

void	ft_close(int fd)
{
	if (fd > 0)
		close(fd);
}

int	ft_exec_bin(t_minishell *data)
{
	//int		pipefd[2];
	char	**argv;
	char	**arge;
	int		child;

	//pipe(pipefd);
	child = fork();
	if (child == EXIT_SUCCESS)
	{
		//ft_close(pipefd[1]);
		//data->fdin = dup2(pipefd[0], STDIN);
		argv = ft_get_argv(data);
		arge = ft_get_arge(data);
		execve(data->pathname, argv, arge);
	}
	else
	{
		//ft_close(pipefd[0]);
		//data->fdout = dup2(pipefd[1], STDOUT);
		wait(&data->ret);
		data->ret /= 256;
	}
	return (data->ret);
}
