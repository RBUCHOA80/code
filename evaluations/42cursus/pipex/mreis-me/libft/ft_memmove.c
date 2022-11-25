/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 16:25:22 by mreis-me          #+#    #+#             */
/*   Updated: 2022/05/31 07:48:54 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	c;

	if (!dst && !src)
		return (0);
	c = 0;
	if ((size_t)dst - (size_t)src < len)
	{
		c = len - 1;
		while (c >= 0 && c < len)
		{
			((unsigned char *)dst)[c] = ((unsigned char *)src)[c];
			c--;
		}
	}
	else
	{
		while (c < len)
		{
			((unsigned char *)dst)[c] = ((unsigned char *)src)[c];
			c++;
		}
	}
	return (dst);
}
