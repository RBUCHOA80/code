/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 13:54:52 by rthome-d          #+#    #+#             */
/*   Updated: 2022/06/14 13:03:27 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s_len;
	size_t	d_len;
	size_t	offset;
	size_t	i;

	s_len = ft_strlen(src);
	d_len = ft_strlen(dst);
	offset = d_len;
	i = 0;
	if (dstsize <= d_len)
		return (dstsize + s_len);
	while (src[i] && d_len + i < dstsize - 1)
	{
		dst[i + offset] = src[i];
		i++;
	}
	dst[i + offset] = 0;
	return (d_len + s_len);
}
