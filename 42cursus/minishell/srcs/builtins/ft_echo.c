/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_echo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 22:47:12 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/17 22:03:20 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int	ft_echo(t_minishell *data)
{
	data->token = data->token->next;
	if (ft_strcmp(data->token->content, "-n") == RETURN_SUCCESS)
	{
		data->token = data->token->next;
		printf("%s", ft_get_cmd(data));
	}
	else
	{
		printf("%s", ft_get_cmd(data));
		printf("\n");
	}
	return (RETURN_SUCCESS);
}
