/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabatist <pabatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:52:36 by pabatist          #+#    #+#             */
/*   Updated: 2023/08/14 16:52:37 by pabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t length)
{
	unsigned char	*ret;

	ret = (unsigned char *)src;
	while (length-- > 0)
	{
		if (*ret == (unsigned char)c)
			return ((void *)ret);
		ret++;
	}
	return (NULL);
}
