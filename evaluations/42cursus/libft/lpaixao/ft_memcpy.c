/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 16:38:39 by ruchoa            #+#    #+#             */
/*   Updated: 2022/05/07 16:38:39 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*tmp;

	tmp = dst;
	if (!(dst || src))
		return (NULL);
	while (n--)
		*((char *)tmp++) = *((char *)src++);
	return (dst);
}

/* #include <stdio.h>

char	g_src[] = "Put your text here.";

int	main(void)
{
	char	*dest;
	int		len;

	dest = g_src + 4;
	printf("scr --> %p %s \n", g_src, g_src);
	len = ft_strlen(g_src);
	ft_memcpy(dest, g_src, len);
	printf("scr --> %p %s \n", g_src, g_src);
	printf("dst --> %p %s \n", dest, dest);
	return (0);
} */
