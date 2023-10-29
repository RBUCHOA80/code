/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec_builtin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:59:01 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/28 22:35:24 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_exec_builtin(t_minishell *data)
{
	t_input	*token;
	int		ret;

	token = data->token;
	ret = 555;
	if (ft_strcmp(token->content, "echo") == EXIT_SUCCESS)
		ret = ft_echo(data);
	else if (ft_strcmp(token->content, "cd") == EXIT_SUCCESS)
		ret = ft_cd(data);
	else if (ft_strcmp(token->content, "pwd") == EXIT_SUCCESS)
		ret = ft_pwd(data);
	else if (ft_strcmp(token->content, "env") == EXIT_SUCCESS)
		ret = ft_env(data);
	else if (ft_strcmp(token->content, "export") == EXIT_SUCCESS)
		ret = ft_export(data);
	else if (ft_strcmp(token->content, "unset") == EXIT_SUCCESS)
		ret = ft_unset(data);
	else if (ft_strcmp(token->content, "exit") == EXIT_SUCCESS)
		ft_exit(data);
	return (ret);
}
