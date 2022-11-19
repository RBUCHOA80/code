/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimachad <fimachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 20:14:35 by fimachad          #+#    #+#             */
/*   Updated: 2022/06/16 12:30:36 by fimachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ptr_count(char *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[j])
	{
		if ((s[j] != c) && (j == 0))
			i++;
		else if ((s[j] != c) && ((s[j - 1] == c)))
			i++;
		j++;
	}
	return (i);
}

static char	*get_chars(char *s, char c)
{
	size_t	k;
	char	*str;

	k = 0;
	while ((s[k] != c) && (s[k] != '\0'))
		k++;
	str = (char *)malloc((k) + 1);
	if (str == NULL)
		return (NULL);
	k = 0;
	while ((s[k] != c) && (s[k] != '\0'))
	{
		str[k] = s[k];
		k++;
	}
	str[k] = '\0';
	return (str);
}

char	**ft_split(const char *s, char c)
{
	size_t	k;
	size_t	z;
	char	*str;
	char	**chars;

	if (!s)
		return (NULL);
	str = (char *)s;
	k = 0;
	z = 0;
	chars = malloc((ptr_count(str, c) + 1) * sizeof(char *));
	if (chars == NULL)
		return (NULL);
	while (z < ptr_count(str, c))
	{
		while ((str[k] == c) && str[k])
			k++;
		chars[z] = get_chars(&str[k], c);
		k = k + ft_strlen(chars[z]);
		z++;
	}
	chars[z] = NULL;
	return (chars);
}
