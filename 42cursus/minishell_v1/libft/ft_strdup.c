/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 19:23:35 by ruchoa            #+#    #+#             */
/*   Updated: 2022/11/19 21:33:42 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dest;

	if (!s1)
		return (NULL);
	len = ft_strlen((char *)s1);
	dest = (char *)malloc(sizeof(*dest) * (len + 1));
	if (!dest)
		return (NULL);
	ft_memcpy(dest, s1, len);
	dest[len] = '\0';
	return (dest);
}

/* int	main(void)
{
	char	*src;
	char	*dest;

	src = "Put your text here.";
	printf("%p\t%s \n", src, src);
	dest = ft_strdup(src);
	printf("%p\t%s \n", dest, dest);
	return (0);
} */
