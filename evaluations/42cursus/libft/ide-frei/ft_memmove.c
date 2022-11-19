/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 18:34:58 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/16 21:46:06 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if ((char *)dst < (char *)src)
	{
		i = 0;
		while (i < len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	if ((char *)src < (char *)dst)
	{
		i = len - 1;
		while ((int)i >= 0)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i--;
		}
	}
	return ((char *)dst);
}

/*int main () {
	char dest[100] = "abra kadabra";
	char src[100] = "avada kedavra";
	printf("BF: %s\n", src);
	printf("BF: %s\n", dest);
	ft_memmove(dest, src, strlen(src));
	printf("AF: %s\n", src);
	printf("AF: %s\n", dest);

	return(0);
}*/
