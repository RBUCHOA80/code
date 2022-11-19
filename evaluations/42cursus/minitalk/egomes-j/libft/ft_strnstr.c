/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes-j <egomes-j@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 13:43:13 by egomes-j          #+#    #+#             */
/*   Updated: 2022/05/27 15:03:23 by egomes-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	lenght;

	if (*needle == '\0')
		return ((char *)haystack);
	lenght = ft_strlen(needle);
	while (*haystack && len-- >= lenght)
	{
		if (*haystack == *needle && ft_strncmp(haystack, needle, lenght) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
