/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorette <amorette@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:22:34 by amorette          #+#    #+#             */
/*   Updated: 2022/06/16 10:24:32 by amorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s)
		return (NULL);
	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* #include <stdio.h>
char	ft_ft(unsigned int i, char c)
{
	if (i+1 && c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
int	main(void)
{
	char	s[] = "aaaaa";
	char	*outp;

	outp = ft_strmapi(s, &ft_ft);
	printf ("ORIGINAL:\t%s\nft_strmapi:\t%s\n", s, outp);
	free (outp);
	return (0);
} */
/* Call it:
* gcc -Wall -Wextra -Werror ft_strmapi.c ft_strlen.c && ./a.out */
