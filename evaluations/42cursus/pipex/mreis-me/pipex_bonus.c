/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:17:19 by mreis-me          #+#    #+#             */
/*   Updated: 2022/07/25 22:03:14 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

int	pipex(int argc, char *argv[], char *envp[])
{
	int		fd_in;
	int		fd_out;
	int		index;

	fd_in = open(argv[1], O_RDONLY);
	if (fd_in == -1)
		msg_perror("Error", EXIT_FAILURE);
	fd_out = open(argv[argc -1], O_WRONLY | O_CREAT | O_TRUNC, 0666);
	if (fd_out == -1)
		msg_perror("Error", EXIT_FAILURE);
	if (dup2(fd_in, STDIN_FILENO) == -1)
		msg_perror("Error", EXIT_FAILURE);
	index = 2;
	while (index < argc -2)
	{
		children(argv[index], envp);
		index++;
	}
	if (dup2(fd_out, STDOUT_FILENO) == -1)
		msg_perror("Error", EXIT_FAILURE);
	push_cmd(argv[argc -2], envp);
	return (0);
}
