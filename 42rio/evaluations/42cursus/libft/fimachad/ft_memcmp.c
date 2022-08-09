/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimachad <fimachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 18:13:52 by fimachad          #+#    #+#             */
/*   Updated: 2022/06/04 19:20:53 by fimachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*n_s1;
	unsigned char	*n_s2;

	i = 0;
	n_s1 = (unsigned char *)s1;
	n_s2 = (unsigned char *)s2;
	if (n != 0)
	{
		while (i < n)
		{
			if (n_s1[i] != n_s2[i])
				return (n_s1[i] - n_s2[i]);
			i++;
		}
	}
	return (0);
}
