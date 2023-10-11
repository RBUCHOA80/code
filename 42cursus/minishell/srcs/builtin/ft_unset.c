/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 21:56:21 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/10 22:47:30 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_unset(t_minishell *data)
{
	t_list	*env;
	t_list	*prev;
	char	*temp;
	char	*str;
	int		n;

	env = data->env;
	str = ft_get_cmd(data);
	while (env && env->content)
	{
		n = 0;
		temp = (char *)env->content;
		while (temp[n] != '=')
			n++;
		if (ft_strncmp(temp, str, n))
		{
			prev = env;
			env = env->next;
		}
		else
		{
			printf("(A)\n");
			prev->next = env->next;
			//ft_lstdelone(env, free);
			return (0);
		}
	}
	return (EXIT_FAILURE);
}
