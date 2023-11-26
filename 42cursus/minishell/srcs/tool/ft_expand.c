/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_expand.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 12:24:10 by ruchoa            #+#    #+#             */
/*   Updated: 2023/11/26 18:52:34 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

char	*ft_expand(t_minishell *data, char *str)
{
	char		**env_name;
	char		*ret;
	int			i;

	if (!data || !str)
		return (NULL);
	ret = ft_calloc(1, 1);
	env_name = ft_split(ft_strtrim(str, "\""), ' ');
	i = 0;
	while (env_name[i])
	{
		if (ft_strcmp(env_name[i], "$?") == EXIT_SUCCESS)
			ret = ft_strjoin(ret, ft_itoa(data->ret));
		else if (env_name[i][0] == '$')
			ret = ft_strjoin(ret, \
				ft_env_value(data->env, &env_name[i][1]));
		else
			ret = ft_strjoin(ret, env_name[i]);
		if (env_name[i + 1])
			ret = ft_strjoin(ret, " ");
		i++;
	}
	return (ret);
}
