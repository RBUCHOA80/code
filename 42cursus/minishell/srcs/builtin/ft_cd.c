/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 23:40:38 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/29 10:19:17 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_has_space(char *cmd)
{
	int	i;

	i = -1;
	while (cmd[++i])
		if (cmd[i] < 14 || cmd[i] == 32)
			return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}

int	ft_cd(t_minishell *data)
{
	char	*cmd;

	data->token = data->token->next;
	cmd = ft_get_cmd(data);
	if (ft_has_space(cmd) == EXIT_FAILURE)
		ft_putstr_fd("minishell: cd: too many arguments\n", data->fdout);
	else if ((ft_strcmp(cmd, "") == EXIT_SUCCESS) || \
			(ft_strcmp(cmd, "~") == EXIT_SUCCESS))
	{
		if (chdir(ft_expand(data, "$HOME")) != EXIT_SUCCESS)
			return (EXIT_FAILURE);
		return (EXIT_SUCCESS);
	}
	else if (chdir(cmd) == EXIT_SUCCESS)
		return (EXIT_SUCCESS);
	else
	{
		ft_putstr_fd("minishell: cd: ", data->fdout);
		ft_putstr_fd(cmd, data->fdout);
		ft_putstr_fd(": no such file or directory\n", data->fdout);
	}
	return (EXIT_FAILURE);
}
