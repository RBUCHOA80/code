/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec_external.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:05:18 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/21 17:37:16 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

extern int	g_ret;

int	ft_exec_external(t_minishell *data)
{
	char	**argv;
	char	**arge;
	int		child;

	child = fork();
	if (child == RETURN_SUCCESS)
	{
		argv = ft_get_argv(data);
		arge = ft_get_arge(data);
		execve(data->pathname, argv, arge);
	}
	else
	{
		waitpid(0, &g_ret, 0);
		printf("return(%i)\n", g_ret / 256);
	}
	return (RETURN_SUCCESS);
}
