/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 23:40:38 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/03 20:36:42 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <minishell.h>

/* int	ft_cd(void)
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
		return (EXIT_ERROR);
	}
	printf("minishell: cd: too many arguments\n");
	return (EXIT_ERROR);
} */

int	ft_cd(t_minishell *data, char *command)
{
	(void)data;
	(void)command;
	printf("ft_cd()\n");
	return (EXIT_SUCCESS);
}
