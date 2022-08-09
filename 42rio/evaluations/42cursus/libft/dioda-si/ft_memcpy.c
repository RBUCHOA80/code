/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioda-si <dioda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:42:25 by dioda-si          #+#    #+#             */
/*   Updated: 2022/06/13 22:13:12 by dioda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest_cpy;
	unsigned char	*src_cpy;

	dest_cpy = (unsigned char *)dest;
	src_cpy = (unsigned char *)src;
	if (dest_cpy == NULL && src_cpy == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		(dest_cpy[i] = src_cpy[i]);
		i++;
	}
	return (dest_cpy);
}

/* char	g_src[] = "Put your sample text here.";

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