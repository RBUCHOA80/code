/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:47:24 by lpaixao-          #+#    #+#             */
/*   Updated: 2023/11/04 22:46:51 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../42cursus/libft/libft.h"
#include <stdio.h>

static int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	if (!s)
		return (0);
	if (*s == c)
		count = 0;
	else
		count = 1;
	i = 0;
	while (s[i])
	{
		if ((s[i] == c) && (s[i + 1] != c) && (s[i + 1] != '\0'))
			count++;
		i++;
	}
	return (count);
}

static char	*new_str(char const *s, int start, int i)
{
	int		j;
	char	*str;

	j = 0;
	if (!s)
		return (0);
	str = ft_calloc((i - start + 2), sizeof(char));
	if (!str)
		return (NULL);
	while (start <= i)
	{
		str[j] = s[start];
		start++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

int	verification(char const *s, char c, char **vect)
{
	int	j;

	j = 0;
	if (!vect || !s)
		return (0);
	if (s[0] == '\0')
	{
		vect[j] = NULL;
		return (1);
	}
	if (c == '\0')
	{
		vect[j] = new_str(s, 0, ft_strlen(s));
		vect[j + 1] = 0;
		return (1);
	}
	return (2);
}

static char	**make_vect(char const *s, char c, char **vect, int count)
{
	size_t	i;
	int		j;
	int		start;

	j = 0;
	i = 0;
	start = 0;
	while (j < count)
	{
		if (s[i] != c && s[i - 1] == c && i >= 1)
			start = i;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			vect[j++] = new_str(s, start, i);
		if ((i - 1) == ft_strlen(s))
			break ;
		i++;
	}
	vect[j] = NULL;
	return (vect);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**vect;

	count = count_words(s, c);
	vect = ft_calloc((count + 1), sizeof(char *));
	if (verification(s, c, vect) == 0)
		return (NULL);
	if (verification(s, c, vect) == 1)
		return (vect);
	return (make_vect(s, c, vect, count));
}

/* // char	*g_str = "    Leticia    Paixao  Wermelinger ";
// char	*g_str = "(null)";
// char	*g_str = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse"; // Teste 02 do war machine
char	*g_str = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.";

int	main(void)
{
	int		i;
	int		j;
	char	sep;
	char	**vect;

	sep = 'z';
	vect = ft_split(g_str, sep);
	i = 0;
	while (vect[i])
		i++;
	j = 0;
	while (j <= i)
		printf("\e[1;32m|%s|\n\e[0m", vect[j++]);
	j = 0;
	while (vect[j])
		free(vect[j++]);
	free(vect);
	return (0);
} */
