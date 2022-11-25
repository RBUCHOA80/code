/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 15:20:12 by rthome-d          #+#    #+#             */
/*   Updated: 2022/05/27 15:54:13 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char*s, int c)
{
	while (*s && (char)*s != (char)c)
		s++;
	if ((char)*s != (char)c)
		return (NULL);
	else
		return ((char *)s);
}
