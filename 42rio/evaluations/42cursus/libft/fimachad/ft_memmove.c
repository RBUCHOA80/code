/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimachad <fimachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 19:05:04 by fimachad          #+#    #+#             */
/*   Updated: 2022/06/04 15:28:44 by fimachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!(dst == NULL && src == NULL))
	{
		if (dst > src)
		{
			while (len--)
				((char *)dst)[len] = ((char *)src)[len];
		}
		else
			ft_memcpy(dst, src, len);
	}
	return (dst);
}
