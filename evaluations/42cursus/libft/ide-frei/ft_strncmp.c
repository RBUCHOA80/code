/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 19:18:24 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/16 19:46:34 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	x;

	if (n == 0)
		return (0);
	x = 0;
	while ((s1[x] && s2[x]) && (s1[x] == s2[x]) && x < n)
	{
		x++;
	}
	if (x == n)
		return ((unsigned char)(s1[x - 1]) - (unsigned char)(s2[x - 1]));
	return ((unsigned char)(s1[x]) - (unsigned char)(s2[x]));
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char i;
	char	string1[] = "avada";
	char	string2[] = "kedavra";
	i = ft_strncmp(string1, string2, 10);
	printf("%d\n", i);
	printf("%d\n", strncmp(string1, string2, 10));
	return (0);
}*/
