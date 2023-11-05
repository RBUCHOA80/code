/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pipe.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 22:47:31 by ruchoa            #+#    #+#             */
/*   Updated: 2023/11/05 19:31:01 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_prepare_pipe(t_minishell *data)
{
	int			fd_in;
	int			fd_out;

	fd_in = 5;
	fd_out = 6;
	fd_in = fd_in + ((data->pipe_count - ft_count_pipe(data) - 1) * 2);
	fd_out = fd_out + ((data->pipe_count - ft_count_pipe(data)) * 2);
	printf("fd_in=%i\n", fd_in);
	printf("fd_out=%i\n", fd_out);
	dup2(fd_in, STDIN_FILENO);
	dup2(fd_out, STDOUT_FILENO);
	close(fd_in);
	close(fd_out);
	return (EXIT_SUCCESS);
}
