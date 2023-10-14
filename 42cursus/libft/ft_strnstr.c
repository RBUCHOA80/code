/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 15:21:52 by ruchoa            #+#    #+#             */
/*   Updated: 2022/05/08 15:21:52 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	s2len;
	size_t	i;
	size_t	j;

	s2len = ft_strlen(s2);
	if (s1 == s2 || s2len == 0)
		return ((char *)s1);
	i = 0;
	while (i < n && s1[i] != '\0')
	{
		j = 0;
		while (s1[i + j] != '\0' && s2[j] != '\0'
			&& (i + j) < n && s1[i + j] == s2[j])
		{
			j++;
			if ((j == n && j == s2len) || j == s2len)
				return ((char *)(s1 + i));
		}
		i++;
	}
	return (0);
}

/* char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	s2len;
	size_t	i;
	size_t	j;

	if (*s2 == 0)
		return ((char *)s1);
	s2len = ft_strlen(s2);
	i = 0;
	while (s1[i] && n)
	{
		if (s1[i] == s2[0])
		{
			j = 0;
			while (s1[i + j] == s2[j] \
				&& j < s2len \
				&& (i + j) < n)
				j++;
			if (j == s2len)
				return ((char *)&s1[i]);
		}
		i++;
	}
	return (NULL);
} */

/* #include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	int		n;

	s1 = "Put your text here.";
	s2 = "ext";
	n = 24;
	printf("1ft    :%s\n", ft_strnstr("Foaaaaaaaao Bar Baz", "Bar ", 17));
	printf("2ft    :%s\n", ft_strnstr("Foo Bar Baz", "Br", 15));
	printf("3ft    :%s\n", ft_strnstr("Foo Bar Baz", "Bar", 11));
	printf("4ft    :%s\n", ft_strnstr("Foo Bar Baz", "Bar", 10));
	printf("5ft    :%s\n", ft_strnstr("Foo Bar Baz", "", 7));
	printf("6ft    :%s\n", ft_strnstr("", "Bar", 7));
	printf("7ft    :%s\n", ft_strnstr("Foo Bar Baz", "F", 0));
	printf("8ft    :%s\n", ft_strnstr(s1, s2, n));
	return (0);
} */
