/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 23:40:38 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/07 21:37:00 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_cd(t_minishell *data)
{
	char	*path;

	path = data->token->next->content;
	if (chdir(path) == 0)
	{
		data->token = data->token->next;
		return (EXIT_SUCCESS);
	}
	else
		printf("minishell: cd: %s: no such file or directory\n", path);
	return (EXIT_FAILURE);
	printf("minishell: cd: too many arguments\n");
	return (EXIT_FAILURE);
}
