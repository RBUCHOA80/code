/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec_bin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:55:24 by ruchoa            #+#    #+#             */
/*   Updated: 2023/11/15 17:20:08 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_exec_bin(t_minishell *data)
{
	char	**argv;
	char	**arge;

	data->pid[ft_count_pipe(data)] = fork();
	if (data->pid[ft_count_pipe(data)] == EXIT_SUCCESS)
	{
		argv = ft_get_argv(data);
		arge = ft_get_arge(data);
		execve(data->pathname, argv, arge);
	}
	return (data->ret);
}
