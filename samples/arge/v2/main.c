#include <stdio.h>

typedef struct s_cmd
{
	char *cmd_name;
}   t_cmd;

typedef struct s_minishell
{
	struct s_cmd *command;
}   t_minishell;

t_minishell g_minishell;

int main()
{
	t_cmd *teste = {
		{
			"echo"
		},
		{
			"cd"
		},
	};

	g_minishell.command = &teste;

	printf("Hello World %s\n", g_minishell.command[1].cmd_name);

	return 0;
}
