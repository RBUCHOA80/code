/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 14:31:32 by wcaetano          #+#    #+#             */
/*   Updated: 2022/05/18 20:46:13 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*tmp;

	tmp = dst;
	if ((size_t) dst < (size_t) src)
		while (len--)
			*((unsigned char *) dst++) = *((unsigned char *) src++);
	else if ((size_t) dst > (size_t) src)
		while (len--)
			((unsigned char *) dst)[len] = ((unsigned char *) src)[len];
	return (tmp);
}
