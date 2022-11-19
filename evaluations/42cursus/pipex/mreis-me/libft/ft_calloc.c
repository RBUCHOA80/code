/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:55:10 by mreis-me          #+#    #+#             */
/*   Updated: 2022/05/24 12:14:32 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	size_in_bytes;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	size_in_bytes = count * size;
	p = malloc(size_in_bytes);
	if (!p)
		return (0);
	ft_memset(p, 0, size_in_bytes);
	return (p);
}
