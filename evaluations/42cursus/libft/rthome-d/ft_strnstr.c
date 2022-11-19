/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:01:21 by rthome-d          #+#    #+#             */
/*   Updated: 2022/06/11 13:55:33 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char*big, const char*little, size_t len)
{
	size_t	offset_bg;
	size_t	offset_lt;

	offset_bg = 0;
	while (big[offset_bg] && offset_bg < len)
	{
		offset_lt = 0;
		while (big[offset_bg + offset_lt] && little[offset_lt]
			&& big[offset_bg + offset_lt]
			== little[offset_lt]
			&& offset_bg + offset_lt < len)
		{
			if (!little[offset_lt + 1])
				return ((char *)big + offset_bg);
			offset_lt++;
		}
		offset_bg++;
	}
	if (!little[0])
		return ((char *)big);
	return (0);
}		
