/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabatist <pabatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:53:50 by pabatist          #+#    #+#             */
/*   Updated: 2023/08/14 16:53:51 by pabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t maxsize)
{
	size_t	srcsize;

	srcsize = ft_strlen(src);
	if (srcsize + 1 < maxsize)
		ft_memcpy(dest, src, srcsize + 1);
	else if (maxsize != 0)
	{
		ft_memcpy(dest, src, maxsize - 1);
		dest[maxsize - 1] = '\0';
	}
	return (srcsize);
}
