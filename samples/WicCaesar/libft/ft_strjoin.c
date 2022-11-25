/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 05:30:33 by cnascime          #+#    #+#             */
/*   Updated: 2022/06/03 17:39:15 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates and returns a new string which is the concatenation of s1 and s2.
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1length;
	size_t	s2length;
	size_t	totallength;
	char	*superbonder;

	if (!s1 || !s2)
		return (NULL);
	s1length = ft_strlen(s1);
	s2length = ft_strlen(s2);
	totallength = s1length + s2length + 1;
	superbonder = malloc(sizeof(char) * totallength);
	if (!superbonder)
		return (NULL);
	ft_memmove(superbonder, s1, s1length);
	ft_memmove((superbonder + s1length), s2, s2length);
	superbonder[totallength - 1] = '\0';
	return (superbonder);
}
