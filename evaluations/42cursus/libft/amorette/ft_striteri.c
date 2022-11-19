/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorette <amorette@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 21:31:06 by angelo            #+#    #+#             */
/*   Updated: 2022/06/16 10:21:27 by amorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* #include <stdio.h>

void	ft_ft(unsigned int index, char *c)
{
	*c = *c + index;
}
int main()
{
	char	a[] = "aaaaaa";
	ft_striteri(a, &ft_ft);
	printf("%s", a);
} */
/* rodar:
gcc -Wall -Wextra -Werror ft_striteri.c && ./a.out*/
