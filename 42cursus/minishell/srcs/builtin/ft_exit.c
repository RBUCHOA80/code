/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:18:28 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/28 22:52:34 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_exit(t_minishell *data)
{
	if (data->token)
		data->token = data->token->next;
	data->ret = EXIT_SUCCESS;
	ft_putstr_fd("exit\n", STDOUT);
	if (data && data->token && data->token->content)
	{
		if (ft_strcmp(data->token->content, \
				ft_itoa(ft_atoi(data->token->content))))
		{
			ft_putstr_fd("minishell: exit: ", STDOUT);
			ft_putstr_fd(data->token->content, STDOUT);
			ft_putstr_fd(": numeric argument required\n", STDOUT);
			data->ret = 2;
		}
		else
			data->ret = ft_atoi(data->token->content);
	}
	exit(data->ret);
}
