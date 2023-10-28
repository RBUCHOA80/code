/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:18:28 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/28 00:44:09 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int	ft_exit(t_minishell *data)
{
	if (data->token)
		data->token = data->token->next;
	data->ret = RETURN_SUCCESS;
	ft_putstr_fd("exit\n", 1);
	if (data && data->token && data->token->content)
	{
		if (ft_strcmp(data->token->content, \
				ft_itoa(ft_atoi(data->token->content))))
		{
			ft_putstr_fd("minishell: exit: ", 1);
			ft_putstr_fd(data->token->content, 1);
			ft_putstr_fd(": numeric argument required\n", 1);
			data->ret = 2;
		}
		else
			data->ret = ft_atoi(data->token->content);
	}
	exit(data->ret);
}
