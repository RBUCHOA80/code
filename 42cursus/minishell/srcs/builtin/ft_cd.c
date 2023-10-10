/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 23:40:38 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/09 22:45:09 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_cd(t_minishell *data)
{
	data->token = data->token->next;
	if (ft_cmd_len(data) == 0)
		if (chdir(ft_expand(data, "$HOME")) == 0)
			return (EXIT_SUCCESS);
	if (ft_cmd_len(data) == 1)
	{
		if (chdir(data->token->content) == 0)
		{
			data->token = data->token->next;
			return (EXIT_SUCCESS);
		}
		else
		{
			printf("minishell: cd: %s: no such file or directory\n", \
				data->token->content);
			data->token = data->token->next;
			return (EXIT_FAILURE);
		}
	}
	printf("minishell: cd: too many arguments\n");
	return (EXIT_FAILURE);
}
