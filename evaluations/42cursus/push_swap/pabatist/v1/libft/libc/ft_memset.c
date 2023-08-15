/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabatist <pabatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:53:04 by pabatist          #+#    #+#             */
/*   Updated: 2023/08/14 16:53:05 by pabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t offset)
{
	unsigned char	*pointer;

	pointer = dest;
	while (offset-- > 0)
		*pointer++ = c;
	return (dest);
}
