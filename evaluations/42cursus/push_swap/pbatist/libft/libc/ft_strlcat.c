/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabatist <pabatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:53:17 by pabatist          #+#    #+#             */
/*   Updated: 2023/08/14 16:53:18 by pabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t maxlen)
{
	size_t	dsize;
	size_t	ssize;

	if (maxlen <= ft_strlen(dest))
		return (maxlen + ft_strlen(src));
	dsize = ft_strlen(dest);
	ssize = 0;
	while (src[ssize] && dsize < maxlen - 1)
		dest[dsize++] = src[ssize++];
	dest[dsize] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[ssize]));
}
