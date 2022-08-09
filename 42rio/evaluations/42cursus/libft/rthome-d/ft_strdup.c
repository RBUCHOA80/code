/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:39:57 by rthome-d          #+#    #+#             */
/*   Updated: 2022/06/10 16:01:31 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	int		str_len;
	char	*dup;

	i = 0;
	str_len = ft_strlen(str);
	dup = (char *)malloc((str_len + 1) * sizeof(char));
	if (dup == 0)
		return (NULL);
	while (i < str_len)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}
