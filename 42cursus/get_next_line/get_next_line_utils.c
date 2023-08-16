/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 11:11:13 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/16 17:05:18 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (1)
	{
		if (*s == (unsigned char) c)
			return ((char *)s);
		if (*s == '\0')
			return (NULL);
		s++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*ret;

	if (!s1 && !s2)
		return (NULL);
	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen((char *)s2);
	ret = (char *)malloc(sizeof(char) * s1_len + s2_len + 1);
	if (!ret)
		return (NULL);
	ft_memcpy(ret, s1, s1_len);
	ft_memcpy(ret + s1_len, s2, s2_len);
	ret[s1_len + s2_len] = '\0';
	free((char *)s1);
	return (ret);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*tmp;

	tmp = dst;
	if (!(dst || src))
		return (NULL);
	while (n--)
		*((char *)tmp++) = *((char *)src++);
	return (dst);
}

size_t	ft_strlen(const char *str)
{
	size_t	len;

	if (!str)
		return (0);
	len = 0;
	while (str[len])
		len++;
	return (len);
}
