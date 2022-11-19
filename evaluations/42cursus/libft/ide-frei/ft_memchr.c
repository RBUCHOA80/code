/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:38:58 by ide-frei          #+#    #+#             */
/*   Updated: 2022/06/13 10:46:26 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		count1;
	char		let;
	char		*string;

	string = (char *)s;
	let = (unsigned char)c;
	count1 = 0;
	while (count1 < n)
	{
		if (string[count1] == let)
			return (&string[count1]);
		count1++;
	}
	return (0);
}

/*#include <stdio.h>
int main(void)
{
	char string1[] = "avada kedavra";
	int letter = 'v';
	printf("%s\n", ft_memchr(string1, letter, 2));
	return(0);
}*/
