/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimachad <fimachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:34:51 by fimachad          #+#    #+#             */
/*   Updated: 2022/05/28 18:59:05 by fimachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*chr;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	chr = (unsigned char *)dst;
	while (i < n)
	{
		chr[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
