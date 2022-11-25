/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:29:58 by danyrodr          #+#    #+#             */
/*   Updated: 2022/04/04 20:10:44 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>
int main()
{
	unsigned int nb;
	char palavra1[50] = "Dany";
	char palavra2[50] = "elle";
	nb = 15;
	char s1[50] = "Dany";
	char s2[50] = "elle";

	printf("função do C: %s\n", strncat(palavra1, palavra2, nb));

	printf("função do ex03: %s\n", ft_strncat(s1, s2, nb));
	return (0);
}