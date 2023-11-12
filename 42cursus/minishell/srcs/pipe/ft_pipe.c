/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pipe.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 22:47:31 by ruchoa            #+#    #+#             */
/*   Updated: 2023/11/12 16:50:15 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_prepare_pipe(t_minishell *data)
{
	int			pipe_in;
	int			pipe_out;

	pipe_in = 5 + ((data->pipe_count - ft_count_pipe(data) - 1) * 2);
	pipe_out = 6 + ((data->pipe_count - ft_count_pipe(data)) * 2);
	dup2(pipe_in, STDIN_FILENO);
	dup2(pipe_out, STDOUT_FILENO);
	ft_fprintf(2, "opened(%i) \t", pipe_in);
	ft_fprintf(2, "close(%i) \n", pipe_out);
	close(pipe_out);
	return (EXIT_SUCCESS);
}
