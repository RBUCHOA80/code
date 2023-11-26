/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env_value.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 21:53:06 by ruchoa            #+#    #+#             */
/*   Updated: 2023/11/25 22:01:19 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

char	*ft_env_value(t_list *env, char *s1)
{
	t_list	*temp;
	char	**strs;

	temp = ft_env_search(env, s1);
	if (temp && temp->content)
	{
		strs = ft_split(temp->content, '=');
		return (strs[1]);
	}
	else
		return (NULL);
}
