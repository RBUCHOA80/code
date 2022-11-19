/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes-j <egomes-j@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 20:20:40 by egomes-j          #+#    #+#             */
/*   Updated: 2022/05/28 10:46:10 by egomes-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src,	size_t len)
{
	size_t				index;
	unsigned char		*dest;
	unsigned const char	*str;

	if (!dst && !src)
		return (NULL);
	index = 0;
	dest = (unsigned char *)dst;
	str = (unsigned char *)src;
	while (index < len)
	{
		*((char *)dest + index) = *((char *)str + index);
		index++;
	}
	return (dest);
}
