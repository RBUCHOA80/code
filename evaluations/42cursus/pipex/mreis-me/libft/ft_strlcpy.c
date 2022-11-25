/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 16:30:50 by mreis-me          #+#    #+#             */
/*   Updated: 2022/05/23 11:05:10 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	c;

	srcsize = ft_strlen(src);
	c = 0;
	if (dstsize != 0)
	{
		while (src[c] != '\0' && c < (dstsize - 1))
		{
			dst[c] = src[c];
			c++;
		}
		dst[c] = '\0';
	}
	return (srcsize);
}
