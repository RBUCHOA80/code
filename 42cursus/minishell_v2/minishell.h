/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes-j <egomes-j@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:58:08 by egomes-j          #+#    #+#             */
/*   Updated: 2023/03/22 22:44:47 by egomes-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H
# define GREY "\e[1;30m"
# define RED "\e[1;31m"
# define GREEN "\e[1;32m"
# define YELLOW "\e[1;33m"
# define BLUE "\e[1;34m"
# define WHITE "\e[0m"

# include <stdio.h>
# include <readline/readline.h>
# include <readline/history.h>
# include <sys/types.h> // opendir
# include <dirent.h> // opendir
# include <unistd.h>
# include "../libft/libft.h"
# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1

typedef int	(*t_ft_ptr)();

typedef struct s_cmd
{
	char		*cmd_name;
	t_ft_ptr	ft_cmd;
	int			argc;
	char		**argv;
}	t_cmd;

void	ft_print_cmd(t_cmd cmd_list);
int		ft_echo(void);
int		ft_cd(void);
int		ft_pwd(void);
int		ft_export(void);
int		ft_unset(void);
int		ft_env(void);
int		ft_exit(void);

t_cmd		g_cmd_list[] = \
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
};

#endif
