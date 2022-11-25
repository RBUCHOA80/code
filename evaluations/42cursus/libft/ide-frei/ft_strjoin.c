/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:46:20 by ide-frei          #+#    #+#             */
/*   Updated: 2022/06/07 17:57:32 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;

	if (s1 == NULL)
		return (NULL);
	str1 = (char *)s1;
	str1 = (char *)malloc(ft_strlen(str1) + ft_strlen(s2) + 1);
	if (!str1)
		return (NULL);
	ft_strlcpy(str1, s1, ft_strlen(s1) + 1);
	ft_strlcpy(str1 + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (str1);
}

/*#include <stdio.h>
int main (void)
{
	char *str1 = "avada kedavra";
	char *str2 = ", Mr Potter!"; 

	printf("%s\n", ft_strjoin(str1, str2));

	return (0);
}*/
