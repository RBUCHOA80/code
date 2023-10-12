/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_env.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:04:26 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/04 22:33:49 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

char	*ft_get_env(t_list *env, char *s1)
{
	char	*temp;
	int		n;

	while (env && env->content)
	{
		n = 0;
		temp = (char *)env->content;
		while (temp[n] != '=')
			n++;
		if (ft_strncmp(temp, s1, n) != RETURN_SUCCESS)
			env = env->next;
		else
			return (&temp[++n]);
	}
	return (NULL);
}
