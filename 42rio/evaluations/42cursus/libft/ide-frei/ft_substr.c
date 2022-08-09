/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:39:51 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/27 16:12:59 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*sub;
	size_t		size_s;
	size_t		size_max;

	size_max = 0;
	size_s = 0;
	if (!s)
		return (NULL);
	sub = malloc(sizeof(char) * len + 1);
	if (sub == NULL)
		return (NULL);
	while (s[size_s])
	{
		if (size_s >= start && size_max < len)
		{
			sub[size_max] = (char)s[size_s];
			size_max++;
		}
		size_s++;
	}
	sub[size_max] = '\0';
	return (sub);
}

/*#include <stdio.h>
int main (void)
{
	char *origin = "avada kedavra";
	char *duplicate;
	
	duplicate = ft_substr(origin, 5, ft_strlen(origin));
	
	printf("Dup:%s\n", duplicate);
	
	return (0);
}*/
