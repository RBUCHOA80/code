/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_next.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 20:50:04 by ruchoa            #+#    #+#             */
/*   Updated: 2023/12/01 20:50:15 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_next(t_minishell *data)
{
	while (data->token)
	{
		if (data->token->type == PIPE)
		{
			data->token = data->token->next;
			break ;
		}
		data->token = data->token->next;
	}
	return (EXIT_SUCCESS);
}
