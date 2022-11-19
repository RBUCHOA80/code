/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:35:48 by rthome-d          #+#    #+#             */
/*   Updated: 2022/05/26 19:50:15 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (src < dst)
		while (n--)
			*(char *)(dst + n) = *(char *)(src + n);
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
