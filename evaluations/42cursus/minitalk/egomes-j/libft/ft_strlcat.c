/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes-j <egomes-j@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 10:40:44 by egomes-j          #+#    #+#             */
/*   Updated: 2022/05/28 12:00:10 by egomes-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_size;
	size_t	src_index;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	dst_size = ft_strlen(dst);
	src_index = 0;
	while (src[src_index] && ((dst_size + 1) < dstsize))
	{
		dst[dst_size] = src[src_index];
		dst_size++;
		src_index++;
	}
	dst[dst_size] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[src_index]));
}
