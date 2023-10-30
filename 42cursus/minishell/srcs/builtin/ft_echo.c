/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_echo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 22:47:12 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/29 21:22:42 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_echo(t_minishell *data)
{
	char	*ret;

	data->token = data->token->next;
	if (data->token)
	{
		if (ft_strcmp(data->token->content, "-n") == EXIT_SUCCESS)
		{
			data->token = data->token->next;
			ret = ft_get_cmd(data);
			if (ret)
				ft_fprintf(data->fdout, "%s", ret);
			return (EXIT_SUCCESS);
		}
		else
		{
			ret = ft_get_cmd(data);
			if (ret)
				ft_fprintf(data->fdout, "%s", ret);
		}
	}
	ft_fprintf(data->fdout, "\n");
	return (EXIT_SUCCESS);
}
