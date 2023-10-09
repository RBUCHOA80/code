/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 23:40:38 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/08 21:42:00 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_cd(t_minishell *data)
{
	char	*path;
	int		len;

	data->token = data->token->next;
	path = ft_calloc(1, 1);
	len = 0;
	while (data && data->token && data->token->type == CMD)
	{
		path = ft_strjoin(path, data->token->content);
		data->token = data->token->next;
		len++;
	}
	if (len == 1)
	{
		if (chdir(path) == 0)
			return (EXIT_SUCCESS);
		else
		{
			printf("minishell: cd: %s: no such file or directory\n", path);
			return (EXIT_FAILURE);
		}
	}
	printf("minishell: cd: too many arguments\n");
	return (EXIT_FAILURE);
}
