/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 23:37:00 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/24 21:06:17 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int	ft_env(t_minishell *data)
{
	t_list	*temp;

	data->token = data->token->next;
	temp = data->env;
	while (temp && temp->content)
	{
		ft_putstr_fd((char *)temp->content, data->out);
		ft_putstr_fd("\n", data->out);
		temp = temp->next;
	}
	return (RETURN_SUCCESS);
}
