/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioda-si <dioda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:41:54 by dioda-si          #+#    #+#             */
/*   Updated: 2022/06/06 19:52:38 by dioda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst > src)
	{
		i = len;
		while (i > 0)
		{
			i--;
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

/* char	g_src[] = "Put your sample text here.";

int	main(void)
{
	char	*dest;
	int		len;

	dest = g_src - 4;
	printf("scr --> %p %s \n", g_src, g_src);
	len = ft_strlen(g_src);
	ft_memmove(dest, g_src, len);
	printf("scr --> %p %s \n", g_src, g_src);
	printf("dst --> %p %s \n", dest, dest);
	return (0);
} */