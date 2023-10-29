/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_cmd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 22:05:01 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/29 12:35:39 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

char	*ft_get_cmd(t_minishell *data)
{
	t_input	*token;
	t_input	*next;
	char	*str;

	token = data->token;
	next = data->token->next;
	if (token == NULL)
		return (NULL);
	str = ft_calloc(1, STDOUT);
	while (data && token && (token->type == CMD || token->type == ARG))
	{
		str = ft_strjoin(str, token->content);
		if (next && (next->type == CMD || next->type == ARG))
			str = ft_strjoin(str, " ");
		token = token->next;
	}
	return (str);
}
