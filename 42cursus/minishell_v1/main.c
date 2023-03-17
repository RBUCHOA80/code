/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:57:47 by egomes-j          #+#    #+#             */
/*   Updated: 2023/03/16 22:38:25 by ruchoa           ###   ########.fr       */
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

int	ft_print_cmdline(t_cmd *cmd_data)
{
	(void)cmd_data;
	return (EXIT_SUCCESS);
}

int	cmd_ls_l(void)
{
	printf("arg called: l\n");
	return (EXIT_SUCCESS);
}

int cmd_ls_a(void)
{
	printf("arg called: a\n");
	return (EXIT_SUCCESS);
}

int cmd_ls_i(void)
{
	printf("arg called: i\n");
	return (EXIT_SUCCESS);
}

int cmd_ls_h(void)
{
	printf("arg called: h\n");
	return (EXIT_SUCCESS);
}

int cmd_ls(int index)
{
	printf("command called: %s\n", cmd_data[index].cmd_name);
	return (EXIT_SUCCESS);
}

int cmd_cd(int index)
{
	printf("command called: %s\n", cmd_data[index].cmd_name);
	return (EXIT_SUCCESS);
}

int ft_get_cmd_len(void)
{
	return ((sizeof(cmd_data) / sizeof(*cmd_data)));
}

int ft_execute(char *line)
{
	int cmd_index;
	int arg;
	int arg_index;
	int cmd_len;
	char **cmd_line;
	char **args;

	cmd_line = ft_split(line, ' ');
	cmd_len = ft_get_cmd_len();
	if (cmd_line[0] == NULL)
		return (EXIT_SUCCESS);
	cmd_index = 0;
	arg = 1;
	arg_index = 0;
	while (cmd_index != cmd_len)
	{
		if ((ft_strncmp(cmd_data[cmd_index].cmd_name, cmd_line[0], ft_strlen(cmd_line[0]))) == 0)
		{
			args = ft_split(cmd_data[cmd_index].args, ',');
			while (cmd_line[arg] != NULL)
			{
				arg_index = 0;
				while (args[arg_index] != NULL)
				{
					if ((ft_strncmp(cmd_line[arg], args[arg_index], ft_strlen(cmd_line[arg]))) == 0)
					{
						cmd_data[cmd_index].ft_arg[arg_index]();
					}
					arg_index++;
				}
				arg++;
			}
			if (arg_index == 0)
				cmd_data[cmd_index].ft_cmd(cmd_index);
			return (EXIT_SUCCESS);
		}
		cmd_index++;
	}
	return (EXIT_FAILURE);
}

void minishell_loop(void)
{
	char *line;

	while (1)
	{
		line = readline("\e[1;31m>$ \e[0m");
		if (ft_execute(line))
			printf("command not found: \n");
		if (line == NULL)
			break;
	}
	return;
}

int main(void)
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
readline			//usado
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