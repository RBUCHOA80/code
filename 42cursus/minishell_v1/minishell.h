/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:58:08 by egomes-j          #+#    #+#             */
/*   Updated: 2023/03/16 07:49:13 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H
# define BLUE "\e[1;30m"
# define RED "\e[1;31m"
# define GREEN "\e[1;32m"
# define YELLOW "\e[1;33m"
# define WHITE "\e[0m"

# include <stdio.h>
# include <readline/readline.h>
# include <readline/history.h>
# include <libft.h>
# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1

typedef void (*void_ft_ptr)();

void cmd_ls_l(void);
void cmd_ls_a(void);
void cmd_ls_i(void);
void cmd_ls_h(void);

typedef struct s_command
{
	char *command_name;
	char *args;
	void_ft_ptr ft_arg[10];
} t_command;

t_command command_data[] = {
	{
		"ls",
		"l,a,i,h",
		{
			&cmd_ls_l,
			&cmd_ls_a,
			&cmd_ls_i,
			&cmd_ls_h			
		}
	}
};

#endif