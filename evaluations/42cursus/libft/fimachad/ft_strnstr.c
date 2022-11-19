/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimachad <fimachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 19:22:07 by fimachad          #+#    #+#             */
/*   Updated: 2022/06/16 12:34:30 by fimachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*n_haystack;
	char	*n_needle;

	i = 0;
	j = 0;
	n_haystack = (char *)haystack;
	n_needle = (char *)needle;
	if (n_needle[0] == '\0')
		return (n_haystack);
	if (ft_strlen(n_needle) > ft_strlen(n_haystack))
		return (NULL);
	while (i < len && (i < ft_strlen(n_haystack)))
	{
		j = 0;
		while (n_needle[j] == n_haystack[i + j])
		{
			if (n_needle[j + 1] == '\0' && ((i + j + 1) <= len))
				return (&n_haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
