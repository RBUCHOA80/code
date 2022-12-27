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

int	ft_isvalid_entry(char **argv)
{
	int	i;
	int	j;

	if (!argv)
		return (0);
	i = 0;
	while (argv[++i])
	{
		if (ft_strncmp(argv[i], ft_itoa(ft_atoi(argv[i])), ft_strlen(argv[i])))
			return (0);
		if (argv[i + 1])
		{
			j = i + 1;
			while (argv[j])
			{
				if (!ft_strncmp(argv[i], argv[j++], 12))
					return (0);
			}
		}
	}
	return (1);
}
