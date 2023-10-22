/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:47:18 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/22 00:02:44 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

/* INCLUDES */
# include "../libft/libft.h"	// libft
# include <unistd.h>			// getpwd | chdir | execve | fork
# include <stdio.h>				// printf
# include <stdlib.h>			// exit
# include <signal.h>			// signal
# include <sys/stat.h>			// stat
# include <sys/wait.h>			// wait
# include <sys/ioctl.h>			// ioctl
# include <linux/limits.h>		// PATH_MAX
# include <readline/history.h>	// history
# include <readline/readline.h>	// readline

/* COLORS */
# define GREY	"\e[1;30m"
# define RED	"\e[1;31m"
# define GREEN	"\e[1;32m"
# define YELLOW	"\e[1;33m"
# define BLUE	"\e[1;34m"
# define WHITE	"\e[0m"

/* DEFINES */
# define APPEND	0
# define TRUNC	1
# define INPUT	2
# define PIPE	3
# define END	4
# define CMD	5

# define STDIN	0
# define STDOUT	1
# define STDERR	2

# define RETURN_FAILURE	1
# define RETURN_SUCCESS	0

/* STRUCTS */
typedef struct s_input
{
	struct s_input	*prev;
	char			*content;
	int				type;
	struct s_input	*next;
}	t_input;

typedef struct s_minishell
{
	int		in;
	int		out;
	int		errno;
	int		ret;
	char	*line;
	char	*pathname;
	char	**argv;
	char	**arge;
	t_list	*env;
	t_input	*token;
}	t_minishell;

/* PROTOTYPES */
int		minishell(t_minishell *data);

int		ft_banner(void);
int		ft_cd(t_minishell *data);
int		ft_cmd_len(t_minishell *data);
int		ft_echo(t_minishell *data);
int		ft_env(t_minishell *data);
int		ft_export(t_minishell *data);
char	*ft_get_cmd(t_minishell *data);
char	*ft_search_env(t_list *env, char *s1);
int		ft_exec_builtin(t_minishell *data);
int		ft_exec_external(t_minishell *data);
char	*ft_expand(t_minishell *data, char *str);
int		ft_exit(t_minishell *data);
char	**ft_get_arge(t_minishell *data);
char	**ft_get_argv(t_minishell *data);
int		ft_history(char *line);
int		ft_init(t_minishell *data);
int		ft_init_data(t_minishell *data);
int		ft_init_env(t_minishell *data);
int		ft_is_builtin(t_minishell *data);
int		ft_is_external(t_minishell *data);
int		ft_pwd(t_minishell *data);
void	ft_signal(int sig);
int		ft_strcmp(char *s1, char *s2);
int		ft_unset(t_minishell *data);
int		ft_tokenize(t_minishell *data, char *line);

#endif
