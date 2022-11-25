/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:15:30 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/27 16:12:15 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		start;
	int		end;

	if (!s1)
		return (0);
	res = (char *)s1;
	start = 0;
	end = ft_strlen((char *)s1) - 1;
	while (s1[start] != 0 && ft_strchr(set, s1[start]))
		start++;
	while (s1[start] != 0 && ft_strchr(set, s1[end]))
		end--;
	res = ft_substr(s1, start, end - start + 1);
	return (res);
}

/*#include <stdio.h>
int main (void)
{
	printf("%s\n", ft_strtrim("ABCavadaABCkedavraABC", "ABC"));
}*/
