/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:31:44 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/16 21:46:41 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src && n > 0)
		return (0);
	while (n-- > 0)
	{
		((char *) dst)[i] = ((char *) src)[i];
		i++;
	}
	return (dst);
}

/*#include<stdio.h>
#include<string.h>
int main () {
	char dest[20] = "abra kadabra";
	char src[] = "avada kedavra";
	printf("%s\n", dest);
	ft_memcpy(dest, src, strlen(src));
	printf("%s\n", dest);
	
	return(0);
}*/
