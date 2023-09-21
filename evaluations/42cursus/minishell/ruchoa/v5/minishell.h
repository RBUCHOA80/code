/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:58:08 by egomes-j          #+#    #+#             */
/*   Updated: 2023/09/21 18:38:35 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

/* INCLUDES */
# include <libft.h>				// libft
# include <get_next_line.h>		// get_next_line

# include <dirent.h>			// opendir
# include <readline/history.h>	// 
# include <readline/readline.h>	// 
# include <fcntl.h>				// open | close
# include <stdio.h>				// printf
# include <sys/types.h>			// opendir

/* COLORS */
# define GREY	"\e[1;30m"
# define RED	"\e[1;31m"
# define GREEN	"\e[1;32m"
# define YELLOW	"\e[1;33m"
# define BLUE	"\e[1;34m"
# define WHITE	"\e[0m"

/* DEFINES */
# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1

/* STRUCTS */
typedef struct s_cmd
{
	char	*cmd_name;
	int		(*ft_cmd)();
	int		argc;
	char	**argv;
}			t_cmd;

typedef struct s_env
{
	char			*env_arg_name;
	struct s_env	*next;
}			t_env;

typedef struct s_minishell
{
	char	**arge;
	int		fd;
	t_cmd	cmd_list[];
}	t_minishell;

/* PROTOTYPES */
int		ft_env_to_txt(char **arge);

int		ft_echo(void);
int		ft_cd(void);
int		ft_pwd(void);
int		ft_export(void);
int		ft_unset(void);
int		ft_env(void);
int		ft_exit(void);
int		ft_dollar(void);

void	ft_print_cmd(t_cmd cmd_list);

/* GLOBAL */
t_minishell	g_minishell = {NULL, -1, {
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
{
	"$",
	&ft_dollar,
	-1,
	NULL,
},
}
};

#endif
