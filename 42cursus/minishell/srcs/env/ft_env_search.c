/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env_search.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 21:53:24 by ruchoa            #+#    #+#             */
/*   Updated: 2023/11/25 22:03:54 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

t_list	*ft_env_search(t_list *lst, char *s1)
{
	t_list	*temp;
	char	**strs;

	temp = lst;
	while (temp && temp->content)
	{
		strs = ft_split(temp->content, '=');
		if (ft_strcmp(strs[0], s1) == EXIT_SUCCESS)
			return (temp);
		else
			temp = temp->next;
	}
	return (NULL);
}
