/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:18:43 by mreis-me          #+#    #+#             */
/*   Updated: 2022/07/26 15:32:40 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <sys/types.h>
# include <sys/wait.h>
# include <stdio.h>
# include <string.h>
# include <fcntl.h>
# include <errno.h>
# include "libft/libft.h"

int		pipex(char *argv[], char *envp[]);
void	child_in(int fd[], int fd_in, char *argv, char *envp[]);
void	child_out(int fd[], int fd_out, char *argv, char *envp[]);

void	push_cmd(char *args, char *envp[]);
char	**get_path(char *envp[]);
char	**get_cmd(char *args);
void	exec_cmd(char **paths, char **cmd, int index);

void	msg_perror(char *msg, int status);
void	msg_error(char *msg, char *cmd, int fd);
void	free_matrix(char **matrix);

#endif //PIPEX_H
