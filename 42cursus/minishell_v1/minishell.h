/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:58:08 by egomes-j          #+#    #+#             */
/*   Updated: 2023/03/17 19:54:45 by ruchoa           ###   ########.fr       */
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
# include <libft.h>
# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1

int	cmd_ls_l(void);
int	cmd_ls_a(void);
int	cmd_ls_i(void);
int	cmd_ls_h(int index);
int	cmd_ls(int index);

int	cmd_cd(int index);

typedef int	(*t_void_ft_ptr)();

typedef struct s_cmd
{
	char			*cmd_name;
	char			*args;
	t_void_ft_ptr	ft_arg[10];
	t_void_ft_ptr	ft_cmd;
}	t_cmd;

t_cmd		g_cmd_data[] = {
{
	"ls",
	"l,a,i,h",
{
	&cmd_ls_l,
	&cmd_ls_a,
	&cmd_ls_i,
	&cmd_ls_h,
},
	&cmd_ls
},
{
	"cd",
	"",
{},
	&cmd_cd
},
};

#endif