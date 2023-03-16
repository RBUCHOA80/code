/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 13:33:10 by ruchoa            #+#    #+#             */
/*   Updated: 2022/05/08 13:33:10 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*p;
	size_t		i;

	p = (const char *)s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char) p[i] == (unsigned char) c)
			return ((void *) &p[i]);
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	void	*result;
	char	*s;
	int		c;
	size_t	n;

	s = "Put your text here.";
	c = 'y';
	n = 26;
	result = ft_memchr(s, c, n);
	printf("%p %s \n", s, s);
	printf("%p %s \n", result, result);
	return (0);
} */
