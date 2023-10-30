/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_builtin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:59:01 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/29 00:25:49 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_is_builtin(t_minishell *data)
{
	if (!data->token)
		return (EXIT_FAILURE);
	if (ft_strcmp(data->token->content, "echo") == EXIT_SUCCESS)
		return (EXIT_SUCCESS);
	if (ft_strcmp(data->token->content, "cd") == EXIT_SUCCESS)
		return (EXIT_SUCCESS);
	if (ft_strcmp(data->token->content, "pwd") == EXIT_SUCCESS)
		return (EXIT_SUCCESS);
	if (ft_strcmp(data->token->content, "export") == EXIT_SUCCESS)
		return (EXIT_SUCCESS);
	if (ft_strcmp(data->token->content, "unset") == EXIT_SUCCESS)
		return (EXIT_SUCCESS);
	if (ft_strcmp(data->token->content, "env") == EXIT_SUCCESS)
		return (EXIT_SUCCESS);
	if (ft_strcmp(data->token->content, "exit") == EXIT_SUCCESS)
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
