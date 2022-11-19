/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:50:45 by mreis-me          #+#    #+#             */
/*   Updated: 2022/05/26 21:19:15 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **str, int index)
{
	while (str)
		free(str[index--]);
	free(str);
}

static int	ft_wordlen(char *str, char c)
{
	int	slen;

	slen = 0;
	while (*str != '\0' && *str != c)
	{
		str++;
		slen++;
	}
	return (slen);
}

static int	ft_countwords(char *str, char c)
{
	int	wordlen;
	int	words;

	words = 0;
	while (*str != '\0')
	{
		while (*str && *str == c)
			str++;
		wordlen = ft_wordlen(str, c);
		str += wordlen;
		if (wordlen)
			words++;
	}
	return (words);
}

static char	**ft_fillwords(char **splits, char *str, char c, int words)
{
	int		index;
	int		wordlen;

	index = -1;
	while (++index < words)
	{
		while (*str != '\0' && *str == c)
			str++;
		wordlen = ft_wordlen(str, c);
		splits[index] = ft_substr(str, 0, wordlen);
		if (!splits[index])
		{
			ft_free(splits, index);
			return (0);
		}
		str += wordlen;
	}
	splits[words] = NULL;
	return (splits);
}

char	**ft_split(char const *s, char c)
{
	char	**splits;
	char	*str;
	int		words;

	if (!s)
		return (0);
	str = (char *)s;
	words = ft_countwords(str, c);
	splits = malloc(sizeof(char *) * (words + 1));
	if (!splits)
		return (0);
	splits = ft_fillwords(splits, str, c, words);
	return (splits);
}
