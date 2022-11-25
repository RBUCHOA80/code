/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioda-si <dioda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 11:54:45 by dioda-si          #+#    #+#             */
/*   Updated: 2022/06/15 17:57:08 by dioda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numpieces(char *s, char c)
{
	int	i;
	int	pieces;

	i = 0;
	pieces = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			pieces++;
			while (s[i] != '\0' && s[i] != c)
				i++;
			if (s[i] == '\0')
				return (pieces);
		}
		i++;
	}
	return (pieces);
}

char	**ft_split(char const *s, char c)
{
	int		start;
	int		piece;
	int		i;
	char	**split;

	if (s == NULL)
		return (NULL);
	piece = 0;
	i = 0;
	split = (char **)malloc(sizeof(char *) * (ft_numpieces((char *)s, c) + 1));
	if (split == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (start != i)
			split[piece++] = ft_substr(s, start, i - start);
	}
	split[piece] = NULL;
	return (split);
}
