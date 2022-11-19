/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorette <amorette@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 07:54:19 by angelo            #+#    #+#             */
/*   Updated: 2022/06/16 10:31:12 by amorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s)
		return (0);
	if (ft_strlen(s) > len + start)
		str = malloc(sizeof(char) * (len + 1));
	else if (ft_strlen(s) > start)
		str = malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	else
		str = malloc(sizeof(char));
	if (!str)
		return (0);
	i = 0;
	j = start;
	if (start < ft_strlen(s))
	{
		while (s[i] && (i < len) && (j < ft_strlen(s)))
			str[i++] = s[j++];
	}
	str[i] = '\0';
	return (str);
}
