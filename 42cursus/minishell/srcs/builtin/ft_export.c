/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_export.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:04:02 by ruchoa            #+#    #+#             */
/*   Updated: 2023/11/05 12:27:52 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_export(t_minishell *data)
{
	char	*cmd;

	data->token = data->token->next;
	if (ft_isalpha(*data->token->content) == EXIT_FAILURE && \
		*data->token->content != '_')
	{
		ft_fprintf(STDOUT, \
			"minishell: export: `%s': not a valid identifier\n", \
				data->token->content);
		return (EXIT_FAILURE);
	}
	else if (ft_strchr(data->token->content, '=') == NULL)
		return (EXIT_SUCCESS);
	else
	{
		cmd = data->token->content;
		ft_lstadd_back(&data->env, ft_lstnew(cmd));
		return (EXIT_SUCCESS);
	}
}
