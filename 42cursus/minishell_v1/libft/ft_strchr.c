/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 21:38:59 by ruchoa            #+#    #+#             */
/*   Updated: 2022/08/30 22:19:05 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
} */

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (1)
	{	
		if (*s == (unsigned char) c)
			return ((char *)s);
		if (*s == '\0')
			return (NULL);
		s++;
	}
}

/* int	main(void)
{
	char	*s;
	char	c;

	s = "Put your text here.";
	c = 'e';
	printf("%s \n", ft_strchr(s, c));
	return (0);
} */
