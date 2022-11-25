/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 18:57:36 by rthome-d          #+#    #+#             */
/*   Updated: 2022/06/11 19:15:12 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	int		i;
	char	*output;

	if (!str1)
		return (NULL);
	output = malloc(ft_strlen(str1) + ft_strlen(str2) + 1);
	if (!output)
		return (NULL);
	i = 0;
	while (*str1)
	{
		output[i] = *(char *)str1;
		i++;
		str1++;
	}
	while (*str2)
	{
		output[i] = *(char *)str2;
		i++;
		str2++;
	}
	output[i] = 0;
	return (output);
}
