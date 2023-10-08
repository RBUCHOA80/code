/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec_builtin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:59:01 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/07 21:28:28 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_echo(t_input *token)
{
	(void)token;
	printf("ft_echo()\n");
	return (EXIT_SUCCESS);
}

int	ft_export(t_input *token)
{
	(void)token;
	printf("ft_export()\n");
	return (EXIT_SUCCESS);
}

int	ft_unset(t_input *token)
{
	(void)token;
	printf("ft_unset()\n");
	return (EXIT_SUCCESS);
}

int	ft_exec_builtin(t_minishell *data)
{
	t_input	*token;
	int		ret;

	token = data->token;
	ret = 0;
	if (ft_strncmp(token->content, "echo", 5) == 0)
		ret = ft_echo(token);
	else if (ft_strncmp(token->content, "cd", 3) == 0)
		ret = ft_cd(data);
	else if (ft_strncmp(token->content, "pwd", 4) == 0)
		ret = ft_pwd();
	else if (ft_strncmp(token->content, "env", 4) == 0)
		ft_env(data->env);
	else if (ft_strncmp(token->content, "export", 7) == 0)
		ft_export(token);
	else if (ft_strncmp(token->content, "unset", 6) == 0)
		ft_unset(token);
	else if (ft_strncmp(token->content, "exit", 5) == 0)
		ft_exit(ret);
	return (ret);
}
