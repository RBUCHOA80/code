/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_echo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 22:47:12 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/09 22:51:03 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_echo(t_minishell *data)
{
	char	*str;

	data->token = data->token->next;
	str = ft_calloc(1, 1);
	while (data && data->token && data->token->type == CMD)
	{
		str = ft_strjoin(str, data->token->content);
		data->token = data->token->next;
	}
	printf("%s", str);
	printf("\n");
	return (EXIT_SUCCESS);
}
