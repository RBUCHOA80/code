/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 16:41:09 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/27 17:49:41 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	count1;
	size_t	count2;

	if (*needle == 0)
		return ((char *)haystack);
	count1 = 0;
	while (haystack[count1] && ft_strlen((char *)needle) <= len)
	{
		count2 = 0;
		while (haystack[count1 + count2] == needle[count2])
		{
			if (needle[count2 + 1] == '\0')
				return ((char *)&haystack[count1]);
			count2++;
		}
		count1++;
		len--;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int main(void)
{
	const char string1[] = "avada kedavra xabalblau";
	const char string2[] = "kw";
	printf("%s\n", ft_strnstr(string1, string2, 8));
	printf("%s\n", strnstr(string1, string2, 8));
	return(0);
}*/
