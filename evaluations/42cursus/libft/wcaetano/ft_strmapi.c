/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 12:45:17 by wcaetano          #+#    #+#             */
/*   Updated: 2022/05/17 10:20:38 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*map_str;

	i = 0;
	map_str = malloc(ft_strlen(s) + 1);
	if (!map_str)
		return (NULL);
	while (s[i])
	{
		map_str[i] = (*f)(i, s[i]);
		i++;
	}
	map_str[i] = '\0';
	return (map_str);
}
