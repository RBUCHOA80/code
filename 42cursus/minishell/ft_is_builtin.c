/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_builtin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:59:01 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/03 21:28:02 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./minishell.h"

int	ft_is_builtin(char *line)
{
	char **command;

	command = ft_split(line, ' ');	
	if (ft_strncmp(*command, "echo", 5) == 0)
		return (1);
	if (ft_strncmp(*command, "cd", 3) == 0)
		return (1);
	if (ft_strncmp(*command, "pwd", 4) == 0)
		return (1);
	if (ft_strncmp(*command, "export", 7) == 0)
		return (1);
	if (ft_strncmp(*command, "unset", 6) == 0)
		return (1);
	if (ft_strncmp(*command, "env", 4) == 0)
		return (1);
	if (ft_strncmp(*command, "exit", 5) == 0)
		return (1);
	return (0);
}
