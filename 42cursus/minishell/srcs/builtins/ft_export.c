/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_export.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:04:02 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/28 00:53:30 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int	ft_export(t_minishell *data)
{
	char	*cmd;

	data->token = data->token->next;
	if (ft_isalpha(*data->token->content) == RETURN_FAILURE && \
		*data->token->content != '_')
	{
		ft_putstr_fd("minishell: export: `", 1);
		ft_putstr_fd(data->token->content, 1);
		ft_putstr_fd("': not a valid identifier\n", 1);
		return (RETURN_FAILURE);
	}
	else if (ft_strchr(data->token->content, '=') == NULL)
		return (RETURN_SUCCESS);
	else
	{
		cmd = data->token->content;
		ft_lstadd_back(&data->env, ft_lstnew(cmd));
		return (RETURN_SUCCESS);
	}
}
