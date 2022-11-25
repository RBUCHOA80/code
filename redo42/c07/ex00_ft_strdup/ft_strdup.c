/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 10:38:01 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/15 14:57:03 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/* #include <string.h>
#include <stdio.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	*src;

	src = "Put your sample text here!";
	printf("%s\n", strdup(src));
	printf("%s <- ft_strdup\n", ft_strdup(src));
	return (0);
} */

char	*ft_strdup(char *src)
{
	int		length;
	int		i;
	char	*s;

	if (src == 0)
		return (0);
	length = 0;
	while (src[length])
		length++;
	s = malloc(length + 1);
	i = 0;
	while (src[i])
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
