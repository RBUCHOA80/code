/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_export.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:04:02 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/12 15:35:07 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int	ft_export(t_minishell *data)
{
	char	*cmd;

	data->token = data->token->next;
	cmd = data->token->content;
	ft_lstadd_back(&data->env, ft_lstnew(cmd));
	while (data->token)
		data->token = data->token->next;
	return (RETURN_SUCCESS);
}
