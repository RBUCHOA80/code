/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pipe_prepare.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 22:47:31 by ruchoa            #+#    #+#             */
/*   Updated: 2023/11/25 22:20:39 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_pipe_prepare(t_minishell *data)
{
	int			pipe_in;
	int			pipe_out;

	pipe_in = 5 + ((data->pipe_count - ft_pipe_count(data) - 1) * 2);
	if (pipe_in > 3)
	{
		dup2(pipe_in, STDIN_FILENO);
		close(pipe_in);
	}
	pipe_out = 6 + ((data->pipe_count - ft_pipe_count(data)) * 2);
	if (pipe_out > 4)
	{
		dup2(pipe_out, STDOUT_FILENO);
		close(pipe_out);
	}
	return (EXIT_SUCCESS);
}
