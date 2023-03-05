/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:55:09 by vchastin          #+#    #+#             */
/*   Updated: 2023/03/04 17:57:28 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_wcount(char const *s, char c)
{
	int	i;
	int	mark;
	int	w_count;

	i = 0;
	w_count = 0;
	mark = 1;
	while (s[i])
	{
		if (s[i] == c)
		{
			mark = 1;
		}
		else if (mark)
		{
			w_count++;
			if (s[i] != c)
				mark = 0;
		}
		i++;
	}
	return (w_count);
}

static char	**ft_free(char **s)
{
	int		i;
	char	*array;

	i = 0;
	while (s[i])
	{
		array = s[i];
		free(array);
		i++;
	}
	free(s);
	s = NULL;
	return (0);
}

static char	*ft_worddup(char const *s, char c)
{
	char	*array;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	array = (char *)malloc(sizeof(char *) * (i + 1));
	if (!array)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		array[i] = s[i];
		i++;
	}
	array[i] = '\0';
	return (array);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**array;

	if (!s)
		return (NULL);
	array = (char **)malloc(sizeof(char *) * (ft_wcount(s, c) + 1));
	if (!array)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			array[i] = ft_worddup(s, c);
			if (array[i] == NULL)
				return (ft_free(array));
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	array[i] = NULL;
	return (array);
}

/*int main (int argc, char *argv[])
{
    int i;
    int index;
    char    **ptr;

    i = 1;
    index = 0;

    while (i < argc)
    {
        ptr = ft_split(argv[i], ' ');
        printf("%s\n", ptr[index]);
        index++;
        i++;
    }
}*/
