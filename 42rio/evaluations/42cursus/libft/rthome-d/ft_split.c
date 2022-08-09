/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:34:35 by rthome-d          #+#    #+#             */
/*   Updated: 2022/06/17 14:36:05 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	quantity(char const *s, char c)
{
	int	number_str;

	number_str = 0;
	while (*s)
	{
		if (*s != c && (*(s +1) == c || *(s + 1) == 0))
			number_str++;
		s++;
	}
	return (number_str);
}

static char	*findsub(char const *s, char c)
{
	int		index1;
	int		index2;
	char	*str;

	index1 = 0;
	index2 = 0;
	while (*s && *s == c)
		s++;
	while (s[index1] && s[index1] != c)
		index1++;
	str = (char *)malloc((index1 + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (index2 < index1)
	{
		str[index2] = s[index2];
		index2++;
	}
	str[index2] = 0;
	return (str);
}

static char const	*nextstr(char const *s, char c)
{
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == 0))
			return (s + 1);
		s++;
	}
	return (s);
}		

char	**ft_split(char const *s, char c)
{
	char	**output;
	int		index;
	int		counter;

	if (!s)
		return (NULL);
	index = 0;
	counter = quantity(s, c);
	output = (char **)malloc((counter + 1) * sizeof(char *));
	if (!output)
		return (NULL);
	while (index < counter)
	{
		output[index] = findsub(s, c);
		s = nextstr(s, c);
		index++;
	}
	output[index] = 0;
	return (output);
}
