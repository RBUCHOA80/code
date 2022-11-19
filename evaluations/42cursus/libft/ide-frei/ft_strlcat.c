/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 20:13:48 by ide-frei          #+#    #+#             */
/*   Updated: 2022/06/08 17:33:33 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dest;
	size_t	len_src;
	int		i;

	len_dest = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (len_src);
	if (len_dest >= dstsize)
		return (dstsize + len_src);
	while (src[i] && len_dest + i < (dstsize - 1))
	{
		dst[len_dest + i] = src[i];
		i++;
	}
	dst[len_dest + i] = '\0';
	return (len_dest + len_src);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	destination[15] = "avadakedavra";
	char	destination2[15] = "avadakedavra";
	printf("%lu\n", ft_strlcat(destination, "lorem ipsum dolor sit amet", 5));
	printf("%s\n", destination);
	printf("%lu\n", strlcat(destination2, "lorem ipsum dolor sit amet", 5));
	printf("%s\n", destination2);
	return (0);
}*/
