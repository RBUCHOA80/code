/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 23:37:00 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/08 20:53:07 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_env(t_minishell *data)
{
	t_list	*env;

	data->token = data->token->next;
	env = data->env;
	while (env && env->content)
	{
		printf("%s\n", (char *)env->content);
		env = env->next;
	}
	return (EXIT_SUCCESS);
}
