/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:19:23 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/15 21:21:36 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> //malloc

#include <stdio.h> //printf

char	*ft_catstrs(int length, char **strs, char *sep, int size);

char	*ft_strjoin(int size, char **strs, char *sep);

char	*g_strs[] = {"Casa", "Rosa", "Carros"};

int	main(void)
{
	char	*sep;
	char	*ret;
	int		size;

	sep = ", ";
	size = sizeof(g_strs) / sizeof(g_strs[0]);
	ret = ft_strjoin(size, g_strs, sep);
	printf("%s\n", ret);
	return (0);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*text;
	int		index;
	int		length;
	int		j;

	if (size == 0)
	{
		text = malloc(1);
		text[0] = '\0';
		return (text);
	}
	length = 0;
	while (sep[length])
		length++;
	length = length * (size - 1);
	index = 0;
	while (index < size)
	{
		j = 0;
		while (strs[index][j++])
			length++;
		index++;
	}
	text = ft_catstrs(length, strs, sep, size);
	return (text);
}

char	*ft_catstrs(int length, char **strs, char *sep, int size)
{
	char	*text;
	int		i_strs;
	int		i_text;
	int		i_sep;
	int		j;

	text = malloc(length);
	i_strs = 0;
	i_text = 0;
	while (i_text < length)
	{
		j = 0;
		while (strs[i_strs][j])
			text[i_text++] = strs[i_strs][j++];
		i_strs++;
		i_sep = 0;
		while (sep[i_sep] && i_strs < size)
			text[i_text++] = sep[i_sep++];
	}
	text[i_text] = '\0';
	return (text);
}
