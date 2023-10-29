/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_export.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:04:02 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/28 22:52:34 by ruchoa           ###   ########.fr       */
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
		ft_putstr_fd("minishell: export: `", STDOUT);
		ft_putstr_fd(data->token->content, STDOUT);
		ft_putstr_fd("': not a valid identifier\n", STDOUT);
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
