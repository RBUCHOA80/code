/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabatist <pabatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:20:18 by pabatist          #+#    #+#             */
/*   Updated: 2023/08/14 16:20:19 by pabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			index;
	size_t			s_size;
	unsigned char	*result;

	if (!s)
		return (NULL);
	s_size = ft_strlen(s);
	index = 0;
	result = (unsigned char *)malloc(s_size * sizeof(char) + 1);
	if (!result)
		return (NULL);
	while (index < s_size)
	{
		result[index] = (f)(index, s[index]);
		index++;
	}
	result[index] = '\0';
	return ((char *)result);
}
