/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:47:24 by lpaixao-          #+#    #+#             */
/*   Updated: 2023/11/05 10:08:02 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	if (!s)
		return (0);
	i = 0;
	if (s[0] == c)
		count = 0;
	else if (c == '\0')
	{
		count = 1;
		return (count);
	}
	else
		count = 1;
	while (s[i])
	{
		if ((s[i] == c) && (s[i + 1] != '\0') && (s[i + 1] != c))
			count++;
		i++;
	}
	return (count);
}

static char	*new_str(char const *s, int start, int i)
{
	int		j;
	char	*str;

	if (!s)
		return (NULL);
	j = 0;
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

	if (!s || !vect)
		return (0);
	j = 0;
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

	if(!s || !c  || !vect)
		return (NULL);
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
			break;
		i++;
	}
	vect[j] = 0;
	return (vect);
}

char	**ft_split(char const *s, char c)
{
	int		ret;
	int		count;
	char	**vect;

	count = count_words(s, c);
	vect = ft_calloc((count + 1), sizeof(char *));
	ret = verification(s, c, vect);
	if (ret == 0)
		return (NULL);
	if (ret == 1)
		return (vect);
	return (make_vect(s, c, vect, count));
}
/*
#include <stdio.h>

int	main()
{
	int	j = 0;
	int i = 0;
//	char *str = "    Leticia    Paixao  Wermelinger ";
//	char *str = "(null)";
//	char *str = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse"; // Teste 02 do war machine
	char *str = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.";
	char sep = 'z';
	char	**vect;

	
	vect = ft_split(str, sep);
	while (vect[i])
		i++;
	while (j <= i)
	{
		printf("|%s|\n", vect[j]);
		j++;
	}
//	printf("\n");
	j = 0;
	while (vect[j])
	{
		free(vect[j]);
		j++;
	}
	free(vect);
	return (0);
}*/
