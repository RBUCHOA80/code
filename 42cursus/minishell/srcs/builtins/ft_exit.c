/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:18:28 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/24 21:45:51 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int	ft_exit(t_minishell *data)
{
	int	status;

	if (data->token)
		data->token = data->token->next;
	status = RETURN_SUCCESS;
	printf("exit\n");
	if (data && data->token && data->token->content)
	{
		if (ft_strcmp(data->token->content, \
				ft_itoa(ft_atoi(data->token->content))))
			printf("minishell: exit: %s: numeric argument required\n", \
				data->token->content);
		else
			status = ft_atoi(data->token->content);
	}
	data->ret = status;
	exit(status);
}
