/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorette <amorette@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 09:42:50 by angelo            #+#    #+#             */
/*   Updated: 2022/06/16 10:08:37 by amorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	chr;
	unsigned char	*ptr;

	i = 0;
	chr = c;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		if (ptr[i] == chr)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
