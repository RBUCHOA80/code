/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:57:47 by egomes-j          #+#    #+#             */
/*   Updated: 2023/03/16 07:40:49 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void cmd_ls_l(void)
{
	printf("%s %s %s", GREEN, "command called l\n", WHITE);
}

void cmd_ls_a(void)
{
	printf("command called a\n");
}

void cmd_ls_i(void)
{
	printf("command called i\n");
}

void cmd_ls_h(void)
{
	printf("command called h\n");
}

int ft_get_command_len(void)
{
	return((sizeof(command_data) / sizeof(*command_data)));	
}

void ft_print_commandline(char *line)
{
	int i;
	int j;
	int k;
	int cmd_len;
	char **command;
	char **args_last;

	command = ft_split(line, ' ');
	i = 1;
	j = 0;
	cmd_len = ft_get_command_len();
	if(command[0] == NULL)
		return ;
	while (j != cmd_len)
	{
		if(ft_strncmp(command_data[j].command_name, command[0], ft_strlen(command[0])) == 0)
		{
			printf("found command -> %s\n", command_data[j].command_name);
			args_last = ft_split(command_data[j].args, ',');			
			while(command[i] != NULL)
			{
				k = 0;
				while(args_last[k] != NULL)
				{
					if(ft_strncmp(command[i], args_last[k], ft_strlen(command[i])) == 0)
					{
						printf("found args -> %s\n", args_last[k]);
						command_data[j].ft_arg[k]();
					}
					k++;
				}
				i++;
			}
		}
		else
			printf("command not exists -> %s\n", command[0]);
		j++;
	}
		
}

void minishell_loop(void)
{
	char *line;
	
	while (1)
	{
		line = readline("\e[1;31m>$ \e[0m");
		ft_print_commandline(line);
		if(!(*line))
			break;
	}
	return ;	
}

int main(void)
{
	minishell_loop();
	return(EXIT_SUCCESS);
}