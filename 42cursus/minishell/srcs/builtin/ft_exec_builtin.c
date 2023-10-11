/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec_builtin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:59:01 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/10 21:56:12 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_export(t_minishell *data)
{
	data->token = data->token->next;
	printf("ft_export()\n");
	return (EXIT_SUCCESS);
}

int	ft_exec_builtin(t_minishell *data)
{
	t_input	*token;
	int		ret;

	token = data->token;
	ret = 0;
	if (ft_strncmp(token->content, "echo", 5) == 0)
		ret = ft_echo(data);
	else if (ft_strncmp(token->content, "cd", 3) == 0)
		ret = ft_cd(data);
	else if (ft_strncmp(token->content, "pwd", 4) == 0)
		ret = ft_pwd(data);
	else if (ft_strncmp(token->content, "env", 4) == 0)
		ret = ft_env(data);
	else if (ft_strncmp(token->content, "export", 7) == 0)
		ret = ft_export(data);
	else if (ft_strncmp(token->content, "unset", 6) == 0)
		ret = ft_unset(data);
	else if (ft_strncmp(token->content, "exit", 5) == 0)
		ret = ft_exit(ret);
	return (ret);
}
