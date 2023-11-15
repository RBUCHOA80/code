/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_export.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:04:02 by ruchoa            #+#    #+#             */
/*   Updated: 2023/11/15 13:45:20 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_export(t_minishell *data)
{
	char	*cmd;

	if (data->token->next == NULL)
		return (EXIT_SUCCESS);
	data->token = data->token->next;

	char **strs = ft_split(data->token->content, '=');

	if (ft_isalpha(*data->token->content) == EXIT_SUCCESS && \
		*data->token->content != '_')
	{
		ft_fprintf(STDOUT_FILENO, \
			"minishell: export: `%s': not a valid identifier\n", \
				data->token->content);
		return (EXIT_FAILURE);
	}
	else if (ft_strchr(data->token->content, '=') == NULL)
		return (EXIT_SUCCESS);
	else if (ft_search_env(data->env, strs[0]))
	{
		ft_fprintf(2, "entrou\n");
		return (EXIT_SUCCESS);
	}
	else
	{
		cmd = data->token->content;
		ft_lstadd_back(&data->env, ft_lstnew(cmd));
		return (EXIT_SUCCESS);
	}
}
