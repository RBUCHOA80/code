/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilveir <csilveir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 09:44:20 by csilveir          #+#    #+#             */
/*   Updated: 2022/06/01 11:57:33 by csilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	i2;
	size_t	i3;

	i = ft_strlen(dst);
	i2 = 0;
	if (dstsize <= i)
		return (dstsize + ft_strlen(src));
	i3 = ft_strlen(src) + i;
	if (dstsize == 0)
	{
		dst = (char *)src;
		return (ft_strlen(src));
	}
	while (src[i2] && i < (dstsize -1))
	{
		dst[i] = src[i2];
		i++;
		i2++;
	}
	dst[i] = '\0';
	return (i3);
}
