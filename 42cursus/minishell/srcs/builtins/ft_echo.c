/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_echo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 22:47:12 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/20 21:03:09 by ruchoa           ###   ########.fr       */
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
				printf("%s", ret);
			return (RETURN_SUCCESS);
		}
		else
		{
			ret = ft_get_cmd(data);
			if (ret)
				printf("%s", ret);
		}
	}
	printf("\n");
	return (RETURN_SUCCESS);
}
