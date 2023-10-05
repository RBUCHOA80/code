/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env_search.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:04:26 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/04 22:33:49 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

char	*ft_env_search(t_list *env, char *s1)
{
	char	*temp;
	int		n;

	while (env && env->content)
	{
		n = 0;
		temp = (char *)env->content;
		while (temp[n] != '=')
			n++;
		if (ft_strncmp(temp, s1, n))
			env = env->next;
		else
			return (&temp[++n]);
	}
	return (NULL);
}
