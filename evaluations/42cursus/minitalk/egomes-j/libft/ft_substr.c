/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes-j <egomes-j@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 12:51:17 by egomes-j          #+#    #+#             */
/*   Updated: 2022/05/27 15:06:03 by egomes-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	index;
	size_t	sz_len;
	char	*substr;

	if (!s)
		return (NULL);
	if (!(len > ft_strlen(s)))
		substr = malloc(sizeof(char) * (len + 1));
	else
		substr = malloc((ft_strlen(s) + 1));
	if (!substr)
		return (NULL);
	index = 0;
	sz_len = 0;
	while (s[index])
	{
		if ((index >= start) && (sz_len < len))
		{
			substr[sz_len] = s[index];
			sz_len++;
		}
		index++;
	}
	substr[sz_len] = '\0';
	return (substr);
}
