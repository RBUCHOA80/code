/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 21:33:00 by ruchoa            #+#    #+#             */
/*   Updated: 2022/06/11 23:19:41 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (src_len + 1 < dstsize)
		ft_memcpy(dst, src, src_len + 1);
	else if (dstsize)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (src_len);
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
	int		dest_len;
	int		src_len;
	int		i;

	i = 0;
	while (g_src[i])
	{
		src_len = ft_strlen(g_src[i]);
		dest = (char *)malloc(sizeof(*dest) * src_len);
		ft_strlcpy(dest, g_src[i], src_len + 1);
		dest_len = ft_strlen(dest);
		printf("%p \t %d %s \n", g_src[i], src_len, g_src[i]);
		printf("%p \t %d %s \n\n", dest, dest_len, dest);
		free(dest);
		i++;
	}
	return (0);
} */
