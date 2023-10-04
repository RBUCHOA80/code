/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_expand.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 12:24:10 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/03 21:01:50 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./minishell.h"

char	*ft_expand(t_minishell *data, char *str)
{
	char	**strs;
	char	*ret;
	int		i;

	ret = ft_calloc(1, 1);
	strs = ft_split(str, ' ');
	i = 0;
	while (strs[i])
	{
		if (strs[i][0] == '$')
			ret = ft_strjoin(ret, ft_env_search(data->env, &strs[i][1]));
		else
			ret = ft_strjoin(ret, strs[i]);
		if (strs[i + 1])
			ret = ft_strjoin(ret, " ");
		i++;
	}
	return (ret);
}
