/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimachad <fimachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:33:00 by fimachad          #+#    #+#             */
/*   Updated: 2022/06/13 19:08:16 by fimachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	len;

	if (s1 && set)
	{
		while (*s1 && ft_strchr(set, *s1))
			s1++;
		len = ft_strlen(s1);
		while (*s1 && ft_strchr(set, s1[len]))
			len--;
		result = ft_substr(s1, 0, len + 1);
		return (result);
	}	
	return (NULL);
}
