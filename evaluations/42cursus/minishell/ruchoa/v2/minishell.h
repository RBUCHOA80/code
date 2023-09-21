/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:58:08 by egomes-j          #+#    #+#             */
/*   Updated: 2023/03/25 22:36:26 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

/* INCLUDES */
# include "../libft/libft.h"	// libft
# include <dirent.h>			// opendir
# include <readline/history.h>	// 
# include <readline/readline.h>	// 
# include <fcntl.h>				// open
# include <stdio.h>				// printf
# include <sys/types.h>			// opendir

/* COLORS */
# define GREY "\e[1;30m"
# define RED "\e[1;31m"
# define GREEN "\e[1;32m"
# define YELLOW "\e[1;33m"
# define BLUE "\e[1;34m"
# define WHITE "\e[0m"

/* DEFINES */
# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1

/* PROTOTYPES */
int	ft_echo(void);
int	ft_cd(void);
int	ft_pwd(void);
int	ft_export(void);
int	ft_unset(void);
int	ft_env(void);
int	ft_exit(void);

/* STRUCTS */
typedef struct s_cmd
{
	char	*cmd_name;
	int 	(*ft_cmd)();
	int		argc;
	char	**argv;
}			t_cmd;

void	ft_print_cmd(t_cmd cmd_list);

typedef struct s_minishell
{
	char 	**arge;
	t_cmd	cmd_list[7];
} t_minishell;

/* GLOBAL */
t_minishell g_minishell = {
	NULL,
	{
		{
			"echo",
			&ft_echo,
			-1,
			NULL,
		},
		{
			"cd",
			&ft_cd,
			-1,
			NULL,
		},
		{
			"pwd",
			&ft_pwd,
			-1,
			NULL,
		},
		{
			"export",
			&ft_export,
			-1,
			NULL,
		},
		{
			"unset",
			&ft_unset,
			-1,
			NULL,
		},
		{
			"env",
			&ft_env,
			-1,
			NULL,
		},
		{
			"exit",
			&ft_exit,
			-1,
			NULL,
		},
	}
};

#endif
