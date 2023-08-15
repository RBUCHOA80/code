/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabatist <pabatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:20:12 by pabatist          #+#    #+#             */
/*   Updated: 2023/08/14 16:20:13 by pabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	fullsize;

	if (!s1 || !s2)
		return (NULL);
	fullsize = (ft_strlen(s1) + ft_strlen(s2)) + 1;
	newstr = (char *)malloc(fullsize * sizeof(char));
	if (!newstr)
		return (NULL);
	ft_strlcpy(newstr, s1, ft_strlen(s1) + 1);
	ft_strlcpy(&newstr[ft_strlen(s1)], s2, ft_strlen(s2) + 1);
	return (newstr);
}
