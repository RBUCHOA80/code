/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trim_cmd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 10:35:39 by mreis-me          #+#    #+#             */
/*   Updated: 2022/07/26 10:40:28 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*trim_cmd(char const *s1, char const *set)
{
	size_t	slen;
	char	*trim;

	if (!s1 || !set)
		return (0);
	if (*s1 && ft_strchr(set, *s1))
		s1++;
	slen = ft_strlen(s1) -1;
	if (slen > 0 && ft_strchr(set, s1[slen]))
		slen--;
	trim = ft_substr(s1, 0, slen + 1);
	return (trim);
}
