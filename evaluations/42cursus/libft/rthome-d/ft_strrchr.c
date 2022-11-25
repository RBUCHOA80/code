/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:05:21 by rthome-d          #+#    #+#             */
/*   Updated: 2022/06/06 16:16:22 by thome            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char*s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	while (i > 0 && ((char *)s)[i] != (char)c)
		i--;
	if (((char *)s)[i] != (char)c)
		return (NULL);
	else
		return ((char *)s + i);
}
