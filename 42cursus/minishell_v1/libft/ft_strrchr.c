/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 12:55:07 by ruchoa            #+#    #+#             */
/*   Updated: 2022/05/08 12:55:07 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (1)
	{
		if (s[len] == (unsigned char) c)
			return ((char *)&s[len]);
		if (len == 0)
			return (NULL);
		len--;
	}
}

/* int	main(void)
{
	char	*s;
	char	c;

	s = "Put your text here.";
	c = 'e';
	printf("%s \n", ft_strrchr(s, c));
	return (0);
} */
