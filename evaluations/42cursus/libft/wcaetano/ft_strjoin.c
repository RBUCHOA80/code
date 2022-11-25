/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 23:29:04 by root              #+#    #+#             */
/*   Updated: 2022/05/18 17:46:58 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*new_str;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	new_str = malloc(size);
	if (!new_str)
	{
		free(new_str);
		return (NULL);
	}
	ft_strlcpy(new_str, s1, size);
	ft_strlcat(new_str, s2, size);
	return (new_str);
}
