/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 23:40:38 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/03 21:37:33 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

int	ft_command_len(char **command)
{
	int	i;

	i = 0;
	while (command[i])
		i++;
	return (i);	
}

int	ft_cd(t_minishell *data, char **command)
{
	if (ft_command_len(command) == 1)
		if (chdir(ft_expand(data, "$HOME")) == 0)
			return (EXIT_SUCCESS);
	if (ft_command_len(command) == 2)
	{
		if (chdir(command[1]) == 0)
			return (EXIT_SUCCESS);
		else
			printf("minishell: cd: %s: no such file or directory\n", \
				command[1]);
		return (EXIT_ERROR);
	}
	printf("minishell: cd: too many arguments\n");
	return (EXIT_ERROR);
}
