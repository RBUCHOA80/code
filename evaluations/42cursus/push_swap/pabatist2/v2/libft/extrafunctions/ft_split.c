/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabatist <pabatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:19:51 by pabatist          #+#    #+#             */
/*   Updated: 2023/08/14 16:19:52 by pabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	set_end(char const *s, char c);

static size_t	set_rows(char const *s, char c);

static char		**free_all(char **result, size_t size);

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	rows;
	size_t	index;
	size_t	end;

	if (!s)
		return (NULL);
	rows = set_rows(s, c);
	result = (char **)malloc(sizeof(char *) * (rows + 1));
	if (!result)
		return (NULL);
	index = 0;
	while (index < rows)
	{
		while (*s && *s == c)
			s++;
		end = set_end(s, c);
		result[index] = ft_substr(s, 0, end);
		if (!result[index])
			return (free_all(result, index));
		s += end + 1;
		index++;
	}
	result[index] = NULL;
	return (result);
}

static char	**free_all(char **result, size_t size)
{
	size_t	index;

	index = 0;
	while (index < size)
		free(result[index++]);
	free(result);
	return (NULL);
}

static size_t	set_end(char const *s, char c)
{
	size_t	end;

	end = 0;
	while (s[end] && s[end] != c)
		end++;
	return (end);
}

static size_t	set_rows(char const *s, char c)
{
	size_t	index;
	size_t	rows;

	rows = 0;
	index = 0;
	while (*s && *s == c)
		s++;
	while (s[index])
	{
		if (index == 0)
			rows++;
		else if (s[index - 1] == c && s[index] != c)
			rows++;
		index++;
	}
	return (rows);
}
