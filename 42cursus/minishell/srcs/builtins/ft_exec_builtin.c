/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec_builtin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:59:01 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/21 23:43:26 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int	ft_exec_builtin(t_minishell *data)
{
	t_input	*token;
	int		ret;

	token = data->token;
	ret = 0;
	if (ft_strcmp(token->content, "echo") == RETURN_SUCCESS)
		ret = ft_echo(data);
	else if (ft_strcmp(token->content, "cd") == RETURN_SUCCESS)
		ret = ft_cd(data);
	else if (ft_strcmp(token->content, "pwd") == RETURN_SUCCESS)
		ret = ft_pwd(data);
	else if (ft_strcmp(token->content, "env") == RETURN_SUCCESS)
		ret = ft_env(data);
	else if (ft_strcmp(token->content, "export") == RETURN_SUCCESS)
		ret = ft_export(data);
	else if (ft_strcmp(token->content, "unset") == RETURN_SUCCESS)
		ret = ft_unset(data);
	else if (ft_strcmp(token->content, "exit") == RETURN_SUCCESS)
		ret = ft_exit(data);
	return (ret);
}
