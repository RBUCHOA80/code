/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 23:37:00 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/29 10:19:17 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_env(t_minishell *data)
{
	t_list	*temp;

	data->token = data->token->next;
	temp = data->env;
	while (temp && temp->content)
	{
		ft_putstr_fd((char *)temp->content, data->fdout);
		ft_putstr_fd("\n", data->fdout);
		temp = temp->next;
	}
	return (EXIT_SUCCESS);
}
