/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes-j <egomes-j@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:58:08 by egomes-j          #+#    #+#             */
/*   Updated: 2023/03/20 20:27:30 by egomes-j         ###   ########.fr       */
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
# include <libft.h>
# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1

typedef int	(*t_ft_ptr)();

typedef struct s_cmd
{
	char		*cmd_name;
	char		*args;
	t_ft_ptr	ft_arg[10];
	t_ft_ptr	ft_cmd;
	char		*c;
}	t_cmd;

int		cmd_ls_l(t_cmd *cmd_data);
int		cmd_ls_a(t_cmd *cmd_data);
int		cmd_ls_i(t_cmd *cmd_data);
int		cmd_ls_h(t_cmd *cmd_data);
int		cmd_ls(t_cmd *cmd_data);

int		cmd_cd(t_cmd *cmd_data);

void	ft_print_cmd(t_cmd *cmd_data);

t_cmd		g_cmd_data[] = \
{
	{
		"ls",
		"-l,-a,-i,-h",
		{
			&cmd_ls_l,
			&cmd_ls_a,
			&cmd_ls_i,
			&cmd_ls_h,
		},
		&cmd_ls,
		"",
	},
	{
		"cd",
		"e,m,u",
		{},
		&cmd_cd,
		"/etc",
	},
};

#endif