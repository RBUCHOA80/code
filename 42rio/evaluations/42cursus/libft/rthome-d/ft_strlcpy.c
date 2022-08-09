/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:39:21 by rthome-d          #+#    #+#             */
/*   Updated: 2022/06/17 15:55:05 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	offset;

	if (!dstsize)
		return (ft_strlen(src));
	offset = 0;
	dstsize--;
	while (src[offset] && offset < dstsize)
	{
		dst[offset] = src[offset];
		offset++;
	}
	dst[offset] = 0;
	return (ft_strlen(src));
}
