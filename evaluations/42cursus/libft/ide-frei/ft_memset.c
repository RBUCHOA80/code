/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 19:34:30 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/11 21:21:11 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*y;

	y = b;
	i = 0;
	while (len > 0)
	{
		*y = c;
		y++;
		len--;
	}
	return ((char *)b);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
    char *str = strdup("Hello World!");
    ft_memset(str, '$', 5);
    printf("%s\n", str);
}*/
