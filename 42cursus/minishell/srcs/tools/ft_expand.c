/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_expand.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 12:24:10 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/21 17:37:29 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

extern int	g_ret;

char	*ft_expand(t_minishell *data, char *str)
{
	char		**strs;
	char		*ret;
	int			i;

	if (!data || !str)
		return (NULL);
	ret = ft_calloc(1, 1);
	strs = ft_split(str, ' ');
	i = 0;
	while (strs[i])
	{
		if (ft_strcmp(strs[i], "$?") == RETURN_SUCCESS)
			ret = ft_strjoin(ret, ft_itoa(g_ret));
		else if (strs[i][0] == '$')
			ret = ft_strjoin(ret, ft_search_env(data->env, &strs[i][1]));
		else
			ret = ft_strjoin(ret, strs[i]);
		if (strs[i + 1])
			ret = ft_strjoin(ret, " ");
		i++;
	}
	return (ret);
}
