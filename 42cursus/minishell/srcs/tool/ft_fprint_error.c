/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprint_error.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 20:51:39 by ruchoa            #+#    #+#             */
/*   Updated: 2023/12/01 20:51:41 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_fprint_error(t_minishell *data)
{
	ft_fprintf(STDERR_FILENO, \
		"minishell: %s: command not found\n", \
			data->token->content);
	while (data && data->token)
		data->token = data->token->next;
	return (UNKNOWN_COMMAND);
}
