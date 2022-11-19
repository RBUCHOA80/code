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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	i = 0;
	while (haystack[i] && len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (haystack[i + j] == needle[j] \
				&& j < needle_len \
				&& (i + j) < len)
				j++;
			if (j == needle_len)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	char	*s1;
	char	*s2;
	int		n;

	s1 = "Put your text here.";
	s2 = "ext";
	n = 24;
	printf("1ft    :%s\n", ft_strnstr("Foaaaaaaaao Bar Baz", "Bar ", 17));
	printf("2ft    :%s\n", ft_strnstr("Foo Bar Baz", "Bar", 15));
	printf("3ft    :%s\n", ft_strnstr("Foo Bar Baz", "Bar", 11));
	printf("4ft    :%s\n", ft_strnstr("Foo Bar Baz", "Bar", 10));
	printf("5ft    :%s\n", ft_strnstr("Foo Bar Baz", "", 7));
	printf("6ft    :%s\n", ft_strnstr("", "Bar", 7));
	printf("7ft    :%s\n", ft_strnstr("Foo Bar Baz", "F", 0));
	printf("8ft    :%s\n", ft_strnstr(s1, s2, n));
	return (0);
} */
