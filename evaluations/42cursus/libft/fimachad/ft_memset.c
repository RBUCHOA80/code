/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimachad <fimachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 17:45:10 by fimachad          #+#    #+#             */
/*   Updated: 2022/05/28 18:57:28 by fimachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*chr;

	i = 0;
	chr = (unsigned char *)b;
	while (i < len)
	{
		chr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
