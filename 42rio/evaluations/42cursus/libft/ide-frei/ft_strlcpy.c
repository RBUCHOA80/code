/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:18:50 by ide-frei          #+#    #+#             */
/*   Updated: 2022/06/06 12:12:13 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	if (dstsize == 0)
		return (ft_strlen(src));
	if (ft_strlen(src) < dstsize - 1)
	{
		ft_memcpy(dst, src, ft_strlen(src) + 1);
	}
	else
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (ft_strlen(src));
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*origin = "avada kedavra";
	char	destiny[15];
	printf("%zu\n", ft_strlcpy(destiny, origin, 13));
	char	destiny2[15];
	printf("%zu\n", strlcpy(destiny2, origin, 13));
	printf("%s\n", destiny);
	printf("%s\n", destiny2);
	return (0);
}*/
