/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 21:56:21 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/16 22:29:50 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int	ft_unset(t_minishell *data)
{
	t_list	*prev;
	t_list	*temp;
	char	**strs;

	data->token = data->token->next;
	if (data->token == NULL)
		return (RETURN_SUCCESS);
	prev = data->env;
	temp = data->env;
	while (temp && temp->content)
	{
		strs = ft_split(temp->content, '=');
		if (ft_strcmp(strs[0], data->token->content) == RETURN_SUCCESS)
		{
			if (prev->next == temp->next)
				data->env = temp->next;
			else
				prev->next = temp->next;
		}
		else
			prev = temp;
		temp = temp->next;
	}
	return (RETURN_SUCCESS);
}
