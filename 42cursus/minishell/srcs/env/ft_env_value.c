/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env_value.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 21:53:06 by ruchoa            #+#    #+#             */
/*   Updated: 2023/11/26 18:53:18 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

char	*ft_env_value(t_list *env, char *env_name)
{
	t_list	*temp;
	char	**strs;

	temp = ft_env_search(env, env_name);
	if (temp && temp->content)
	{
		strs = ft_split(temp->content, '=');
		return (strs[1]);
	}
	else
		return (NULL);
}
