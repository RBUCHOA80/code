/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 20:16:10 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/25 20:37:35 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	int		len;

	len = ft_strlen((char *)s1);
	dst = (char *)malloc(sizeof(char) * len + 1);
	if (dst == NULL)
		return (NULL);
	ft_strlcpy(dst, s1, len + 2);
	return (dst);
}

/*#include <stdio.h>
int main (void)
{
 	char ori[14] = "igor";
    char *dup;

    dup = ft_strdup(ori);

    printf("Original: '%s' (%d)\n", ori,ft_strlen(ori));
    printf("Duplicate: '%s' (%d)\n", dup,ft_strlen(dup));

    return (0);	
}*/
