/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isvalid_entry.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 07:31:48 by ruchoa            #+#    #+#             */
/*   Updated: 2022/12/26 22:48:03 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isvalid_entry(char **strs)
{
	int		i;
	int		j;

	if (!strs)
		return (0);
	i = 0;
	while (strs[i])
	{
		ft_printf("(A)");
		if (strs[i][0] == '+')
		{
			if (ft_strncmp(&strs[i][1], ft_itoa(ft_atoi(strs[i])), ft_strlen(strs[i])))
				return (0);
		}
		else if (ft_strncmp(strs[i], ft_itoa(ft_atoi(strs[i])), ft_strlen(strs[i])))
				return (0);
		if (strs[i + 1])
		{
			j = i + 1;
			while (strs[j])
				if (!ft_strncmp(strs[i], strs[j++], ft_strlen(strs[i])))
					return (0);
		}
		i++;
	}
	return (1);
}
