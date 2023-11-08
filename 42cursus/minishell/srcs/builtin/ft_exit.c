/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:18:28 by ruchoa            #+#    #+#             */
/*   Updated: 2023/11/07 22:16:34 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

//"CTRL+D - EOF"
int	ft_exit(t_minishell *data)
{
	if (data->token)
		data->token = data->token->next;
	data->ret = EXIT_SUCCESS;
	ft_fprintf(STDOUT_FILENO, "exit\n");
	if (data && data->token && data->token->content)
	{
		if (ft_strcmp(data->token->content, \
				ft_itoa(ft_atoi(data->token->content))))
		{
			ft_fprintf(STDOUT_FILENO, \
				"minishell: exit: %s: numeric argument required\n", \
					data->token->content);
			data->ret = 2;
		}
		else
			data->ret = ft_atoi(data->token->content);
	}
	exit(data->ret);
}
