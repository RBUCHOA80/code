/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_external.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:03:41 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/17 21:31:14 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int	ft_is_external(t_minishell *data)
{
	char		**paths;
	char		*pathname;
	struct stat	buf;
	int			i;

	pathname = (data->token->content);
	if (stat(pathname, &buf) == RETURN_SUCCESS)
	{
		data->pathname = pathname;
		return (RETURN_SUCCESS);
	}
	paths = ft_split(ft_expand(data, "$PATH"), ':');
	i = 0;
	while (paths[i])
	{
		pathname = ft_strjoin(paths[i++], "/");
		pathname = ft_strjoin(pathname, data->token->content);
		if (stat(pathname, &buf) == RETURN_SUCCESS)
		{
			data->pathname = pathname;
			return (RETURN_SUCCESS);
		}
	}
	return (RETURN_FAILURE);
}
