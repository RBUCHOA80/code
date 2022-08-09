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

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
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
	char destino_original[50] = "amen";
	char destino_teste[50] = "amen";

	char palavra2[] = "doins";

	printf("função do Original: %s\n", strcat(destino_teste, palavra2));

	printf("função do ex02: %s\n", ft_strcat(destino_teste, palavra2));
	return (0);
}
