/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_search.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:04:26 by ruchoa            #+#    #+#             */
/*   Updated: 2023/09/21 20:48:34 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./minishell.h"

int	ft_lst_search(t_list *env, char *s1)
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
		{
			printf("%s\n", &temp[++n]);
			return (SUCCESS);
		}
	}
	return (ERROR);
}
