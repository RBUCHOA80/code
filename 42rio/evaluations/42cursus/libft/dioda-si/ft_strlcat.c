/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioda-si <dioda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 12:09:06 by dioda-si          #+#    #+#             */
/*   Updated: 2022/06/07 16:25:31 by dioda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i_dst;
	size_t	i_src;

	i_dst = 0;
	i_src = 0;
	while (dst[i_dst] != '\0' && i_dst < dstsize)
		i_dst++;
	while (src[i_src] != '\0' && (i_dst + i_src + 1) < dstsize)
	{
		dst[i_dst + i_src] = src[i_src];
		i_src++;
	}
	if (i_dst < dstsize)
		dst[i_dst + i_src] = '\0';
	return (i_dst + ft_strlen(src));
}

/* char	*g_src[] = {\
					"A Sentence With 30 Characters.", \
					"A New Sentence, With 35 Characters.", \
					"Another Sentence, With 37 Characters.", \
					"Another New Sentence, With 41 Characters.", \
					};

int	main(void)
{
	char	*dest;
	int		src0_len;
	int		src_len;
	int		dest_len;
	int		i;

	src0_len = ft_strlen(g_src[0]);
	i = 0;
	while (g_src[i])
	{
		src_len = ft_strlen(g_src[i]);
		dest = (char *)malloc(sizeof(*dest) * (src0_len + src_len + 1));
		ft_memcpy(dest, g_src[0], src0_len + 1);
		dest_len = ft_strlcat(dest, g_src[i], src0_len + src_len + 1);
		printf("%p \t %d \t %s \n", g_src[0], src0_len, g_src[0]);
		printf("%p \t %d \t %s \n", g_src[i], src_len, g_src[i]);
		printf("%p \t %d \t %s \n\n", dest, dest_len, dest);
		free(dest);
		i++;
	}
	return (0);
} */