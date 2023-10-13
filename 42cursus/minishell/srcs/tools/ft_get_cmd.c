/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_cmd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 22:05:01 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/12 21:06:43 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

char	*ft_get_cmd(t_minishell *data)
{
	char	*str;

	data->token = data->token->next;
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
