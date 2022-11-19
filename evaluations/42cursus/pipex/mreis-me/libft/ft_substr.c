/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 09:03:47 by mreis-me          #+#    #+#             */
/*   Updated: 2022/05/22 19:11:45 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*dest;

	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!s || !dest)
		return (0);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		dest[j++] = s[i++];
	dest[j] = '\0';
	return (dest);
}
