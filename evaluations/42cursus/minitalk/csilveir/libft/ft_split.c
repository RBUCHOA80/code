/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilveir <csilveir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:19:23 by csilveir          #+#    #+#             */
/*   Updated: 2022/06/07 13:18:51 by csilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_count_char(char const *s, char c)
{
	unsigned int	i;

	i = 1;
	if (c == 0 && *s == c)
		return (i);
	while (*s != '\0' && s != NULL)
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			return (i);
		i++;
		while (*s != c)
		{
			s++;
			if (*(s + 1) == '\0')
				return (i);
		}
	}
	if (i == 1 && *s != '\0' && s != NULL)
		return (2);
	return (i +1);
}

static char	*ft_string2(char *all, char c)
{
	int		i;
	char	*ret;

	if (*all == '\0')
		return (NULL);
	ret = NULL;
	i = 0;
	while (all[i] != c && all[i] != '\0')
	{
		i++;
	}
	ret = (char *)malloc((i +1) * sizeof(char));
	if (!ret)
		return (NULL);
	ret[i] = '\0';
	while (i > 0)
	{
		i--;
		ret[i] = all[i];
	}
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	char			**ret;
	unsigned int	i;
	unsigned int	j;

	if (!s)
		return (NULL);
	i = ft_count_char(s, c);
	ret = (char **)malloc(sizeof(char *) * (i));
	if (!ret)
		return (NULL);
	j = 0;
	while (j < (i -1))
	{
		while (*s == c)
			s++;
		ret[j] = ft_string2((char *)s, c);
		s = ft_strchr((const char *)s, c);
		j++;
	}
	ret[j] = NULL;
	return (ret);
}
