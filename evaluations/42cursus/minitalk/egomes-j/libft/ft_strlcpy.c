/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes-j <egomes-j@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 19:30:07 by egomes-j          #+#    #+#             */
/*   Updated: 2022/05/28 09:07:45 by egomes-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	index;

	len = 0;
	index = 0;
	while (src[len])
		len++;
	if (dstsize < 1)
		return (len);
	while ((src[index]) && (index < (dstsize - 1)))
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return (len);
}
