/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes-j <egomes-j@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:57:47 by egomes-j          #+#    #+#             */
/*   Updated: 2023/03/24 20:58:59 by egomes-j         ###   ########.fr       */
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

void	ft_print_cmd(t_cmd cmd_list)
{
	int i;
	int argc;

	argc = 0;
	while (cmd_list.argv[argc])
		argc++;
	printf("command: %s\n", cmd_list.cmd_name);
	printf("argc: %i\n", argc);
	i = 0;
	while (cmd_list.argv[i])
	{
		printf("argv[%i]: %s\n", i, cmd_list.argv[i]);
		i++;		
	}
	return ;
}

int	ft_echo(void)
{
	t_cmd	var;
	var = g_cmd_list[0];
	ft_print_cmd(var);
	return (EXIT_SUCCESS);
}

int	ft_cd(void)
{
	char buff[256];
	t_cmd	var;
	var = g_cmd_list[1];
	
	ft_print_cmd(var);
	if(var.argc == 1)
	{
		printf("CHDIR %i\n", chdir("~"));
		printf("%s\n", getcwd(buff, 256));		
		return (EXIT_SUCCESS);			
	}
	else if(var.argc == 2)
	{
		if(chdir(var.argv[1]) == 0)
			return (EXIT_SUCCESS);			
		else
			printf("minishell: cd: %s: No such file or directory\n", var.argv[1]);
		return(EXIT_FAILURE);
	}
	printf("minishell: cd: too many arguments\n");
	return(EXIT_FAILURE);
}

/* 
bash: cd: lçkfsadnfnad: No such file or directory


int	cmd_cd(t_cmd *cmd_list)
{
	char buff[256];
	
	ft_print_cmd(cmd_list);
	printf("A -> %s\n", getcwd(buff, 256));
	chdir(cmd_list->c);
	printf("B -> %s\n", getcwd(buff, 256));	
	return (EXIT_SUCCESS);
} */

int	ft_pwd(void)
{
	ft_print_cmd(g_cmd_list[2]);
	return (EXIT_SUCCESS);
}

int	ft_export(void)
{
	ft_print_cmd(g_cmd_list[3]);
	return (EXIT_SUCCESS);
}

int	ft_unset(void)
{
	ft_print_cmd(g_cmd_list[4]);
	return (EXIT_SUCCESS);
}

int	ft_env(t_env envs)
{	
	t_cmd	var;
	var = g_cmd_list[5];
	(void)envs;
	
	ft_print_cmd(var);
	return (EXIT_SUCCESS);
}

int	ft_exit(void)
{
	ft_print_cmd(g_cmd_list[6]);
	return (EXIT_SUCCESS);
}


int	ft_get_cmd_len(void)
{
	return ((sizeof(g_cmd_list) / sizeof(*g_cmd_list)));
}

int	ft_execute(char *line)
{
	int i;
	int argc;
	char **argv;
	argv = ft_split(line, ' ');

	argc = 0;
	while (argv[argc])
		argc++;	
	i = 0;
	while (g_cmd_list[i].cmd_name)
	{
		if(ft_strncmp(g_cmd_list[i].cmd_name, argv[0], ft_strlen(argv[0])) == 0)
		{
			g_cmd_list[i].argv = argv;
			g_cmd_list[i].argc = argc;
			g_cmd_list[i].ft_cmd();
			return (EXIT_SUCCESS);
		}
		i++;
	}
	printf("Command not found: %s\n", argv[0]);
	return (EXIT_FAILURE);	
}

/* int	ft_execute(char *line)
{
	char	**argv;
	char	**args;
	int		argc;
	int		cmd_index;
	int		arg;
	int		arg_index;

	argv = ft_split(line, ' ');
	argc = ft_get_cmd_len();
	if (argv[0] == NULL)
		return (EXIT_SUCCESS);
	cmd_index = 0;
	arg = 1;
	arg_index = 0;
	while (cmd_index != argc)
	{
		if ((ft_strncmp(g_cmd_list[cmd_index].cmd_name, argv[0], ft_strlen(argv[0]))) == 0)
		{
			args = ft_split(g_cmd_list[cmd_index].args, ',');
			while (argv[arg] != NULL)
			{
				arg_index = 0;
				if(argv[arg][0] == '-')
				{					
					while (args[arg_index] != NULL)
					{
						if ((ft_strncmp(argv[arg], args[arg_index], ft_strlen(argv[arg]))) == 0)
						{
							g_cmd_list[cmd_index].c = args[arg_index];
							g_cmd_list[cmd_index].ft_arg[arg_index](&g_cmd_list[cmd_index]);
						}
						arg_index++;
					}
				}
				else
				{
					printf("G -> %s\n", argv[arg]);					
				}
				arg++;
			}
			if (arg_index == 0)
				g_cmd_list[cmd_index].ft_cmd(&g_cmd_list[cmd_index]);
			return (EXIT_SUCCESS);
		}
		cmd_index++;
	}
	printf("command not found: %s\n", argv[0]);
	return (EXIT_FAILURE);
} */

void	minishell_loop(void)
{
	char	*line;
	char	buff[256];

	while (1)
	{
		line = readline(strcat(getcwd(buff, 256), "\e[1;31m$ \e[0m"));
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
fork				//iniciar procesos
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
opendir				// DIR *opendir(const char *name);
perror
pipe
printf
read
readdir				// struct dirent *readdir(DIR *dirp);
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

### Erros conhecidos ###

1 - ls está guardando o último arg (quando passado)

*/