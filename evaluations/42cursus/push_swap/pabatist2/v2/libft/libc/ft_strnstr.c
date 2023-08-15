/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabatist <pabatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:54:14 by pabatist          #+#    #+#             */
/*   Updated: 2023/08/14 16:54:15 by pabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_size;

	needle_size = ft_strlen(needle);
	if (!needle_size)
		return ((char *)haystack);
	while (*haystack && needle_size <= len--)
	{
		if (!ft_memcmp(haystack, needle, needle_size))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
