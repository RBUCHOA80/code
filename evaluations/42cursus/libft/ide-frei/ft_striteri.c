/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:19:24 by ide-frei          #+#    #+#             */
/*   Updated: 2022/06/01 17:00:03 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>

void	f(unsigned int index, char * letter)
{
	printf("%c\n", letter[index]);
}*/

char	*ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		(*f)(i, s + i);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
int main ()
{
	char *str = "hello world";
	ft_striteri(str, *f);
}*/
