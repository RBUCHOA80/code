/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimachad <fimachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 18:28:27 by fimachad          #+#    #+#             */
/*   Updated: 2022/06/13 21:50:18 by fimachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*c;
	size_t	i;

	i = 0;
	if (s == (void *)0)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len <= (ft_strlen(s) - start))
		c = malloc(len + 1);
	else
		c = malloc(ft_strlen(s) + 1 - start);
	if (c == NULL)
		return (NULL);
	while ((i < len) && (s[start + i] != '\0'))
	{
		c[i] = s[start + i];
		i++;
	}
	c[i] = '\0';
	return (c);
}
