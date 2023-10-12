/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_builtin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:59:01 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/12 12:41:21 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_is_builtin(t_input *token)
{
	char	*command;

	if (!token)
		return (RETURN_SUCCESS);
	command = token->content;
	if (ft_strncmp(command, "echo", 5) == RETURN_SUCCESS)
		return (1);
	if (ft_strncmp(command, "cd", 3) == RETURN_SUCCESS)
		return (1);
	if (ft_strncmp(command, "pwd", 4) == RETURN_SUCCESS)
		return (1);
	if (ft_strncmp(command, "export", 7) == RETURN_SUCCESS)
		return (1);
	if (ft_strncmp(command, "unset", 6) == RETURN_SUCCESS)
		return (1);
	if (ft_strncmp(command, "env", 4) == RETURN_SUCCESS)
		return (1);
	if (ft_strncmp(command, "exit", 5) == RETURN_SUCCESS)
		return (1);
	return (RETURN_SUCCESS);
}
