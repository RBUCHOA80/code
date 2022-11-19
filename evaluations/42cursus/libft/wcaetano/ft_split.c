/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 16:02:15 by wcaetano          #+#    #+#             */
/*   Updated: 2022/05/17 10:25:42 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char sep)
{
	while (*s && *s == sep)
		s++;
	if (!*s)
		return (0);
	while (*s && *s != sep)
		s++;
	return (1 + count_words(s, sep));
}

static size_t	word_len(char const *s, char sep)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != sep)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	words;
	size_t	len;
	size_t	i;

	i = 0;
	words = count_words(s, c);
	tab = malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);
	tab[words] = NULL;
	while (i < words)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			len = word_len(s, c);
			tab[i++] = ft_substr(s, 0, len);
		}
		s += len;
	}
	return (tab);
}
