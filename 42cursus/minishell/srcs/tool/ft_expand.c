/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_expand.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 12:24:10 by ruchoa            #+#    #+#             */
/*   Updated: 2023/11/25 21:12:58 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

char	*ft_expand(t_minishell *data, char *str)
{
	char		**strs;
	char		*ret;
	int			i;

	if (!data || !str)
		return (NULL);
	ret = ft_calloc(1, 1);
	strs = ft_split(ft_strtrim(str, "\""), ' ');
	i = 0;
	while (strs[i])
	{
		if (ft_strcmp(strs[i], "$?") == EXIT_SUCCESS)
			ret = ft_strjoin(ret, ft_itoa(data->ret));
		else if (strs[i][0] == '$')
			ret = ft_strjoin(ret, ft_env_value(data->env, &strs[i][1]));
		else
			ret = ft_strjoin(ret, strs[i]);
		if (strs[i + 1])
			ret = ft_strjoin(ret, " ");
		i++;
	}
	return (ret);
}
