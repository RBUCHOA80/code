/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:32:32 by mreis-me          #+#    #+#             */
/*   Updated: 2022/05/23 09:58:41 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	char	*p;
	int		len;

	len = 0;
	while (s1[len])
		len++;
	str = malloc(len + 1);
	if (!str)
		return (0);
	p = str;
	while (*s1)
		*p++ = *s1++;
	*p = '\0';
	return (str);
}
