/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 16:42:33 by ruchoa            #+#    #+#             */
/*   Updated: 2022/05/07 16:42:33 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*tmp;

	tmp = dst;
	if (dst < src)
		ft_memcpy(dst, src, len);
	else if (dst > src)
		while (len--)
			((char *)tmp)[len] = ((char *)src)[len];
	return (dst);
}

/* char	g_src[] = "Put your text here.";

int	main(void)
{
	char	*dest;
	int		len;

	dest = g_src + 4;
	printf("scr --> %p %s \n", g_src, g_src);
	len = ft_strlen(g_src);
	ft_memmove(dest, g_src, len);
	printf("scr --> %p %s \n", g_src, g_src);
	printf("dst --> %p %s \n", dest, dest);
	return (0);
} */
