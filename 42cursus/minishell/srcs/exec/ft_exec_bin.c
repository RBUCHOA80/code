/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec_bin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:55:24 by ruchoa            #+#    #+#             */
/*   Updated: 2023/11/02 13:51:57 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_exec_bin(t_minishell *data)
{
	char	**argv;
	char	**arge;
	int		pid;

	pid = fork();
	if (pid == EXIT_SUCCESS)
	{
		argv = ft_get_argv(data);
		arge = ft_get_arge(data);
		execve(data->pathname, argv, arge);
	}
	else if (pid != -1)
	{
		wait(&data->ret);
		data->ret /= 256;
	}
	return (data->ret);
}
