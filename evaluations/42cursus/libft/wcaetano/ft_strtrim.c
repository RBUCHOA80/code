/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 20:41:00 by root              #+#    #+#             */
/*   Updated: 2022/05/16 23:24:08 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		run;
	int		size;
	char	*buffer;

	i = 0;
	run = 1;
	j = ft_strlen(s1);
	while (i <= j && run)
	{
		run = 0;
		if (ft_strchr(set, s1[i]))
			run = ++i;
		if (ft_strrchr(set, s1[j]))
			run = j--;
	}
	size = j - i + 1 + 1;
	if (j < i)
		size = 1;
	buffer = malloc(size);
	if (!buffer)
		return (NULL);
	ft_strlcpy(buffer, s1 + i, size);
	return (buffer);
}
