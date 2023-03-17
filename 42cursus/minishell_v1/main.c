/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:57:47 by egomes-j          #+#    #+#             */
/*   Updated: 2023/03/17 20:12:30 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./minishell.h"

int	printf_color(void)
{
	printf("%s %s %s", GREY, "cinza\n", WHITE);
	printf("%s %s %s", RED, "vermelho\n", WHITE);
	printf("%s %s %s", GREEN, "verde\n", WHITE);
	printf("%s %s %s", BLUE, "azul\n", WHITE);
	printf("%s %s %s", YELLOW, "amarelo\n", WHITE);
	return (EXIT_SUCCESS);
}

int	ft_print_cmdline(t_cmd *g_cmd_data)
{
	(void)g_cmd_data;
	return (EXIT_SUCCESS);
}

int	cmd_ls_l(void)
{
	printf("arg: l\n");
	return (EXIT_SUCCESS);
}

int	cmd_ls_a(void)
{
	printf("arg: a\n");
	return (EXIT_SUCCESS);
}

int	cmd_ls_i(void)
{
	printf("arg: i\n");
	return (EXIT_SUCCESS);
}

int	cmd_ls_h(int index)
{
	printf("arg: %s\n", g_cmd_data[index].cmd_name);
	return (EXIT_SUCCESS);
}

int	cmd_ls(int index)
{
	printf("command: %s\n", g_cmd_data[index].cmd_name);
	return (EXIT_SUCCESS);
}

int	cmd_cd(int index)
{
	printf("command: %s\n", g_cmd_data[index].cmd_name);
	return (EXIT_SUCCESS);
}

int	ft_get_cmd_len(void)
{
	return ((sizeof(g_cmd_data) / sizeof(*g_cmd_data)));
}

int	ft_execute(char *line)
{
	char	**cmd_line;
	char	**args;
	int		cmd_len;
	int		cmd_index;
	int		arg;
	int		arg_index;

	cmd_line = ft_split(line, ' ');
	cmd_len = ft_get_cmd_len();
	if (cmd_line[0] == NULL)
		return (EXIT_SUCCESS);
	cmd_index = 0;
	arg = 1;
	arg_index = 0;
	while (cmd_index != cmd_len)
	{
		if ((ft_strncmp(g_cmd_data[cmd_index].cmd_name, cmd_line[0], \
			ft_strlen(cmd_line[0]))) == 0)
		{
			args = ft_split(g_cmd_data[cmd_index].args, ',');
			while (cmd_line[arg] != NULL)
			{
				arg_index = 0;
				while (args[arg_index] != NULL)
				{
					if ((ft_strncmp(cmd_line[arg], args[arg_index], \
						ft_strlen(cmd_line[arg]))) == 0)
					{
						g_cmd_data[cmd_index].ft_arg[arg_index](arg_index);
					}
					arg_index++;
				}
				arg++;
			}
			if (arg_index == 0)
				g_cmd_data[cmd_index].ft_cmd(cmd_index);
			return (EXIT_SUCCESS);
		}
		cmd_index++;
	}
	printf("command not found: %s\n", cmd_line[0]);
	return (EXIT_FAILURE);
}

void	minishell_loop(void)
{
	char	*line;

	while (1)
	{
		line = readline("\e[1;31m>$ \e[0m");
		ft_execute(line);
		if (line == NULL)
			break ;
	}
	return ;
}

int	main(void)
{
	minishell_loop();
	printf_color();
	return (0);
}

/*
access
add_history
chdir
close
closedir			//vamos usar para cd
dup
dup2
execve
exit
fork
free
fstat
getcwd
getenv
ioctl
isatty
kill
lstat
malloc
open
opendir				//vamos usar para cd
perror
pipe
printf
read
readdir				//vamos usar para cd
readline			//usado para capturar entrada na linha de comando
rl_clear_history
rl_on_new_line
rl_redisplay
rl_replace_line
sigaction
sigaddset
sigemptyset
signal
stat
strerror
tcgetattr
tcsetattr
tgetent
tgetflag
tgetnum
tgetstr
tgoto
tput
ttyname
ttyslot
unlink
wait
wait3
wait4
waitpid
write
*/