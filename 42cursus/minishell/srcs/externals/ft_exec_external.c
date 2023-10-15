/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec_external.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:05:18 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/15 13:16:46 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

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
		wait(0);
	return (RETURN_SUCCESS);
}
