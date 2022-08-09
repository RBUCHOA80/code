/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 10:35:39 by mreis-me          #+#    #+#             */
/*   Updated: 2022/05/22 19:15:17 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	slen;
	char	*trim;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	slen = ft_strlen(s1);
	while (slen > 0 && ft_strchr(set, s1[slen]))
		slen--;
	trim = ft_substr(s1, 0, slen + 1);
	return (trim);
}
