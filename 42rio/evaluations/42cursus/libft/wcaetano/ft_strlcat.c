/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 09:22:42 by wcaetano          #+#    #+#             */
/*   Updated: 2022/05/16 22:52:23 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;

	i = 0;
	src_len = ft_strlen(src);
	while (dst[i] && (i < dstsize))
		i++;
	if (i == dstsize)
		return (dstsize + src_len);
	dst_len = ft_strlen(dst);
	while (*src && (i < dstsize - 1))
		dst[i++] = *src++;
	dst[i] = '\0';
	return (dst_len + src_len);
}
