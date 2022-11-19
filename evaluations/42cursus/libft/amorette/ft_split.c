/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angelo <angelo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 21:09:08 by angelo            #+#    #+#             */
/*   Updated: 2022/06/16 00:44:59 by angelo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_substring(char const *s, char c)
{
	unsigned long	i;
	int				qt_subs;

	i = 0;
	qt_subs = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			qt_subs++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (qt_subs);
}

static char	**my_ft_free_array(char **sub)
{
	unsigned int	i;

	i = 0;
	while (sub[i])
	{
		free(sub[i]);
		i++;
	}
	free(sub);
	return (NULL);
}

static char	*my_ft_input_array(char const *s, char c)
{
	char			*sub;
	unsigned int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	sub = malloc(sizeof(char) * (i + 1));
	if (!sub)
	{
		my_ft_free_array(&sub);
		return (NULL);
	}
	i = 0;
	while (s[i] && s[i] != c)
	{
		sub[i] = s[i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

static char	**my_ft_split(char **out_array, char const *s, char c)
{
	unsigned int	i;

	i = 0;
	while (*s)
	{
		while (*s && (*s == c))
			s++;
		if (*s && *s != c)
		{
			out_array[i] = my_ft_input_array(s, c);
			if (!out_array[i])
				return (NULL);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	out_array[i] = NULL;
	return (out_array);
}

char	**ft_split(char const *s, char c)
{
	int		qt_subs;
	char	**array;

	if (!s)
		return (NULL);
	qt_subs = 0;
	qt_subs = count_substring(s, c);
	array = (char **)malloc((qt_subs + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	return (my_ft_split(array, s, c));
}

/* #include <stdio.h>
int	main(void)
{
	char	s[400] = "iiiiolaioiola.iiii";
	char	c = 'i';
	char	**outp;
	unsigned long	i;

	outp = ft_split(s, c);
	printf("s1: %s\nc: %c\n", s, c);
	i = 0;
	while (outp[i])
	{
		printf("outp[%lu]: %s\n", i, outp[i]);
		i++;
	}
	free (outp);
	return (0);
} */
/* Call it:
* gcc -Wall -Wextra -Werror ft_split.c && ./a.out */
