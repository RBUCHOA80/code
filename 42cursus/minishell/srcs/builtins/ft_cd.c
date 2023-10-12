/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 23:40:38 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/12 15:35:07 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int	ft_has_space(char *cmd)
{
	int	i;

	i = -1;
	while (cmd[++i])
		if (cmd[i] < 14 || cmd[i] == 32)
			return (RETURN_FAILURE);
	return (RETURN_SUCCESS);
}

int	ft_cd(t_minishell *data)
{
	char	*cmd;

	cmd = ft_get_cmd(data);
	if (ft_has_space(cmd) == RETURN_FAILURE)
		printf("minishell: cd: too many arguments\n");
	else if ((ft_strncmp(cmd, "", 2) == RETURN_SUCCESS) || \
			(ft_strncmp(cmd, "~", 2) == RETURN_SUCCESS))
	{
		chdir(ft_expand(data, "$HOME"));
		return (RETURN_SUCCESS);
	}
	else if (chdir(cmd) == RETURN_SUCCESS)
		return (RETURN_SUCCESS);
	else
		printf("minishell: cd: %s: no such file or directory\n", cmd);
	return (RETURN_FAILURE);
}
