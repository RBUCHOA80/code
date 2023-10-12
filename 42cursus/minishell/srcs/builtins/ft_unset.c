/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 21:56:21 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/12 19:56:31 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int	ft_unset(t_minishell *data)
{
	t_list	*prev;
	t_list	*temp;

	data->token = data->token->next;
	if (data->token)
	{
		prev = data->env;
		temp = data->env;
		while (temp && temp->content)
		{
			if (ft_strcmp(temp->content, data->token->content) == RETURN_SUCCESS)
				prev->next = temp->next;
			else
				prev = temp;
			temp = temp->next;
		}
	}
	while (data->token)
		data->token = data->token->next;
	return (RETURN_SUCCESS);
}
