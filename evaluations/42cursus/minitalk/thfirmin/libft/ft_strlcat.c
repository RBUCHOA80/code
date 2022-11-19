/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 01:19:38 by ruchoa            #+#    #+#             */
/*   Updated: 2022/06/11 23:19:47 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize > dst_len && dstsize > 0)
	{
		i = 0;
		while (src[i] && i < (dstsize - dst_len - 1))
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[dst_len + i] = '\0';
		return (dst_len + src_len);
	}
	return (dstsize + src_len);
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
