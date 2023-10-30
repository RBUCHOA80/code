/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_arge.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:06:22 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/28 22:35:24 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_env_count(t_minishell *data)
{
	t_list	*temp;
	int		count;

	temp = data->env;
	count = 0;
	while (temp)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}

char	**ft_get_arge(t_minishell *data)
{
	t_list	*temp;
	char	**arge;
	int		arge_count;
	int		i;

	temp = data->env;
	arge_count = ft_env_count(data);
	arge = ft_calloc(sizeof(*arge), (arge_count + 1));
	i = 0;
	while (temp)
	{
		arge[i++] = ft_strdup(temp->content);
		temp = temp->next;
	}
	return (arge);
}
