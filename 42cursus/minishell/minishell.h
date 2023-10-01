/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:47:18 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/01 15:09:53 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

/* INCLUDES */
# include "../libft/libft.h"	// libft
# include <stdio.h>				//printf
# include <linux/limits.h>		//PATH_MAX
# include <readline/readline.h>	//readline

/* COLORS */
# define GREY	"\e[1;30m"
# define RED	"\e[1;31m"
# define GREEN	"\e[1;32m"
# define YELLOW	"\e[1;33m"
# define BLUE	"\e[1;34m"
# define WHITE	"\e[0m"

# define EMPTY 0
# define CMD 1
# define ARG 2
# define TRUNC 3
# define APPEND 4
# define INPUT 5
# define PIPE 6
# define END 7

# define STDIN 0
# define STDOUT 1
# define STDERR 2

# define ERROR 1
# define SUCCESS 0

typedef struct s_input
{
	struct s_input	*prev;
	char			*str;
	int				type;
	struct s_input	*next;
}	t_input;

typedef struct s_minishell
{
	int		in;
	int		out;
	int		exit;
	t_list	*env;
	t_input	*token;
}	t_minishell;

int		minishell(t_minishell *data);

int		ft_banner(void);
int		ft_init(t_minishell *data, char **arge);
char	*ft_env_search(t_list *env, char *s1);
char	*ft_expand(t_minishell *data, char *str);

int		ft_init_data(t_minishell *data);
int		ft_init_env(t_minishell *data, char **arge);

#endif