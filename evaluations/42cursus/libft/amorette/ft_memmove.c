/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorette <amorette@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 21:11:53 by angelo            #+#    #+#             */
/*   Updated: 2022/06/16 10:16:02 by amorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*ds;
	char	*sr;

	ds = dest;
	sr = (char *)src;
	if (sr < ds)
	{
		while (n--)
			ds[n] = sr[n];
	}
	else
	{
		ft_memcpy(ds, sr, n);
	}
	return (ds);
}
