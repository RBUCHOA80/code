/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:22:41 by ruchoa            #+#    #+#             */
/*   Updated: 2023/09/12 21:11:37 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./minishell.h"

int	ft_init_data(t_minishell *data)
{
	data->in = dup(STDIN);
	data->out = dup(STDOUT);
	data->exit = SUCCESS;
	printf("ft_init_data.c\n");
	return (SUCCESS);
}

int	ft_init_env(t_minishell *data, char **arge)
{
	t_list	*env;

	env = malloc(sizeof(t_list *));
	while (*arge)
		ft_lstadd_back(&env, ft_lstnew(ft_strdup(*arge++)));
	data->env = env;
	printf("ft_init_env.c\n");
	return (SUCCESS);
}

int	ft_init(t_minishell *data, char **arge)
{
	printf("ft_init.c\n");
	ft_init_data(data);
	ft_init_env(data, arge);
	return (SUCCESS);
}
