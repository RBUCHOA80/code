/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_cmd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 22:05:01 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/20 20:55:12 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

char	*ft_get_cmd(t_minishell *data)
{
	char	*str;

	if (data->token == NULL)
		return (NULL);
	str = ft_calloc(1, 1);
	while (data && data->token && data->token->type == CMD)
	{
		str = ft_strjoin(str, data->token->content);
		if (data->token->next && data->token->next->type == CMD)
			str = ft_strjoin(str, " ");
		data->token = data->token->next;
	}
	return (str);
}
