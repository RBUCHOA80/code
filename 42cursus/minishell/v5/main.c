/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:57:47 by egomes-j          #+#    #+#             */
/*   Updated: 2023/09/20 19:28:19 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./minishell.h"

int	printf_color(void)
{
	printf("%s%s%s", GREY, "cinza\n", WHITE);
	printf("%s%s%s", RED, "vermelho\n", WHITE);
	printf("%s%s%s", GREEN, "verde\n", WHITE);
	printf("%s%s%s", BLUE, "azul\n", WHITE);
	printf("%s%s%s", YELLOW, "amarelo\n", WHITE);
	return (EXIT_SUCCESS);
}

void	ft_print_cmd(t_cmd cmd_list)
{
	int	i;
	int	argc;

	argc = 0;
	while (cmd_list.argv[argc])
		argc++;
	printf("command: %s\n", cmd_list.cmd_name);
	printf("\targc: %i\n", argc);
	i = 0;
	while (cmd_list.argv[i])
	{
		printf("\t\targv[%i]: %s\n", i, cmd_list.argv[i]);
		i++;
	}
	printf("\n");
	return ;
}

int	ft_echo(void)
{
	t_cmd	var;

	var = g_minishell.cmd_list[0];
	ft_print_cmd(var);
	return (EXIT_SUCCESS);
}

int	ft_cd(void)
{
	t_cmd	var;
	char	buff[256];

	var = g_minishell.cmd_list[1];
	ft_print_cmd(var);
	if (var.argc == 1)
	{
		printf("CHDIR %i\n", chdir("~"));
		printf("%s\n", getcwd(buff, 256));
		return (EXIT_SUCCESS);
	}
	else if (var.argc == 2)
	{
		if (chdir(var.argv[1]) == 0)
			return (EXIT_SUCCESS);
		else
			printf("minishell: cd: %s: no such file or directory\n", \
				var.argv[1]);
		return (EXIT_FAILURE);
	}
	printf("minishell: cd: too many arguments\n");
	return (EXIT_FAILURE);
}

int	ft_pwd(void)
{
	t_cmd	var;

	var = g_minishell.cmd_list[2];
	ft_print_cmd(var);
	return (EXIT_SUCCESS);
}

int	ft_export(void)
{
	t_cmd	var;

	var = g_minishell.cmd_list[3];
	ft_print_cmd(var);
	return (EXIT_SUCCESS);
}

int	ft_unset(void)
{
	t_cmd	var;

	var = g_minishell.cmd_list[4];
	ft_print_cmd(var);
	return (EXIT_SUCCESS);
}

int	ft_env(void)
{	
	t_cmd	var;
	char	*str;

	var = g_minishell.cmd_list[5];
	ft_print_cmd(var);
	g_minishell.fd = open("./env.txt", O_RDONLY);
	while (1)
	{
		str = get_next_line(3);
		if (str == NULL)
			break ;
		printf("%s", str);
	}
	close(g_minishell.fd);
	return (EXIT_SUCCESS);
}

int	ft_exit(void)
{
	t_cmd	var;

	var = g_minishell.cmd_list[6];
	ft_print_cmd(var);
	return (EXIT_SUCCESS);
}

int	ft_dollar(void)
{
	int	i;

	i = 1;
	while (g_minishell.cmd_list[7].argv[0][i])
		printf("%c", g_minishell.cmd_list[7].argv[0][i++]);
	printf("A ->\n");
	return (EXIT_SUCCESS);
}

int	ft_execute(char *line)
{
	int		i;
	int		argc;
	char	**argv;

	argv = ft_split(line, ' ');
	argc = 0;
	while (argv[argc])
		argc++;
	i = 0;
	while (g_minishell.cmd_list[i].cmd_name)
	{
		if (ft_strncmp(g_minishell.cmd_list[i].cmd_name, argv[0], \
			ft_strlen(argv[0])) == 0)
		{
			g_minishell.cmd_list[i].argv = argv;
			g_minishell.cmd_list[i].argc = argc;
			g_minishell.cmd_list[i].ft_cmd();
			return (EXIT_SUCCESS);
		}
		i++;
	}
	if ('$' == argv[0][0])
		g_minishell.cmd_list[7].ft_cmd();
	printf("command not found: %s\n", argv[0]);
	return (EXIT_FAILURE);
}

void	minishell_loop(void)
{
	char	*line;
	char	buff[256];

	while (1)
	{
		printf("%s%s%s%s%s", GREEN, " @", WHITE, ":", BLUE);
		// line = readline(ft_strlcat(getcwd(buff, 256), "\e[0m$ ", 256));
		line = readline(strcat(getcwd(buff, 256), "\e[0m$ "));
		ft_execute(line);
		if (line == NULL)
			break ;
	}
	return ;
}

int	ft_env_to_txt(char **arge)
{
	int	i;

	g_minishell.fd = open("./env.txt", O_RDWR | O_CREAT | O_TRUNC, 00777);
	i = 0;
	while (arge[i])
		ft_putendl_fd(arge[i++], g_minishell.fd);
	close(g_minishell.fd);
	return (EXIT_SUCCESS);
}

int	main(int argc, char **argv, char **arge)
{
	(void) argc;
	(void) argv;
	g_minishell.arge = arge;
	ft_env_to_txt(arge);
	minishell_loop();
	printf_color();
	close(g_minishell.fd);
	return (0);
}

/* FUNÇÔES AUTORIZADAS
access
add_history
chdir
close
closedir
dup
dup2
execve
exit
fork				// iniciar processos
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
readline			// usado para capturar entrada na linha de comando
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

*/