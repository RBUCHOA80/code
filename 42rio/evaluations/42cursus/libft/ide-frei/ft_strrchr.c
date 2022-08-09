/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 18:36:15 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/11 21:27:45 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	let;
	int		size;

	let = (char)c;
	size = ft_strlen((char *)s);
	while (size >= 0)
	{
		if (s[size] == let)
			return ((char *)&s[size]);
		size--;
	}
	if (let == 0)
		return ((char *)&s[size]);
	return (0);
}

/*#include <stdio.h>
int main(void)
{
	char string1[] = "avada kedavra";
	int letter = 'v';
	printf("%s\n", ft_strrchr(string1, letter));
	return(0);
}*/
