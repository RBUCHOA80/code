/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env_search.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 21:53:24 by ruchoa            #+#    #+#             */
/*   Updated: 2023/11/26 19:19:23 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

t_list	*ft_env_search(t_list *env, char *env_name)
{
	t_list	*temp;
	char	**split_env;

	temp = env;
	while (temp && temp->content)
	{
		split_env = ft_split(temp->content, '=');
		if (ft_strcmp(split_env[0], env_name) == EXIT_SUCCESS)
			return (temp);
		else
			temp = temp->next;
	}
	return (NULL);
}
