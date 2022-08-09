/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 16:19:05 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/09 18:35:26 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		count1;
	char	let;

	let = (char)c;
	count1 = 0;
	while (s[count1])
	{
		if (s[count1] == let)
			return ((char *)&s[count1]);
		count1++;
	}
	if (let == 0)
		return ((char *)&s[count1]);
	return (0);
}

/*#include <stdio.h>
int main(void)
{
	char string1[] = "avada kedavra";
	int letter = 'v';
	printf("%s\n", ft_strchr(string1, letter));
	return(0);
}*/
