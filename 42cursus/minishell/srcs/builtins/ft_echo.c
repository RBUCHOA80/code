/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_echo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 22:47:12 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/24 21:05:00 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int	ft_echo(t_minishell *data)
{
	char	*ret;

	data->token = data->token->next;
	if (data->token)
	{
		if (ft_strcmp(data->token->content, "-n") == RETURN_SUCCESS)
		{
			data->token = data->token->next;
			ret = ft_get_cmd(data);
			if (ret)
				ft_putstr_fd(ret, data->out);
			return (RETURN_SUCCESS);
		}
		else
		{
			ret = ft_get_cmd(data);
			if (ret)
				ft_putstr_fd(ret, data->out);
		}
	}
	ft_putstr_fd("\n", data->out);
	return (RETURN_SUCCESS);
}
