/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_bin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:55:53 by ruchoa            #+#    #+#             */
/*   Updated: 2023/11/02 14:23:56 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_is_bin(t_minishell *data)
{
	char		**paths;
	char		*pathname;
	struct stat	buf;
	int			i;

	pathname = (data->token->content);
	if (stat(pathname, &buf) == EXIT_SUCCESS)
	{
		data->pathname = pathname;
		return (EXIT_SUCCESS);
	}
	paths = ft_split(ft_expand(data, "$PATH"), ':');
	i = 0;
	while (paths[i])
	{
		pathname = ft_strjoin(paths[i++], "/");
		pathname = ft_strjoin(pathname, data->token->content);
		if (stat(pathname, &buf) == EXIT_SUCCESS)
		{
			data->pathname = pathname;
			return (EXIT_SUCCESS);
		}
	}
	return (EXIT_FAILURE);
}
