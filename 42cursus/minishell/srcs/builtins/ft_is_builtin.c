/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_builtin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:59:01 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/12 20:10:19 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int	ft_is_builtin(t_input *token)
{
	char	*command;

	if (!token)
		return (RETURN_FAILURE);
	command = token->content;
	if (ft_strcmp(command, "echo") == RETURN_SUCCESS)
		return (RETURN_SUCCESS);
	if (ft_strcmp(command, "cd") == RETURN_SUCCESS)
		return (RETURN_SUCCESS);
	if (ft_strcmp(command, "pwd") == RETURN_SUCCESS)
		return (RETURN_SUCCESS);
	if (ft_strcmp(command, "export") == RETURN_SUCCESS)
		return (RETURN_SUCCESS);
	if (ft_strcmp(command, "unset") == RETURN_SUCCESS)
		return (RETURN_SUCCESS);
	if (ft_strcmp(command, "env") == RETURN_SUCCESS)
		return (RETURN_SUCCESS);
	if (ft_strcmp(command, "exit") == RETURN_SUCCESS)
		return (RETURN_SUCCESS);
	return (RETURN_FAILURE);
}
