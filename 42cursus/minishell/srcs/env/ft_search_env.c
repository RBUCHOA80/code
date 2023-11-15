/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_env.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:04:26 by ruchoa            #+#    #+#             */
/*   Updated: 2023/11/15 13:44:03 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

char	*ft_search_env(t_list *env, char *s1)
{
	t_list	*temp;
	char	**strs;

	temp = env;
	while (temp && temp->content)
	{
		strs = ft_split(temp->content, '=');
		if (ft_strcmp(strs[0], s1) == EXIT_SUCCESS)
			return (strs[1]);
		else
			temp = temp->next;
	}
	return (NULL);
}
