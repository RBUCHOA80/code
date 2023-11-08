/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaixao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:02:54 by lpaixao-          #+#    #+#             */
/*   Updated: 2023/10/28 16:59:58 by lpaixao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

static char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strdup(const char *s)
{
	char	*dest;

	dest = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	ft_strcpy(dest, s);
	return (dest);
}
/*
#include <stdio.h>

int	main()
{
	#include <string.h>

	const char	str[] = "Abacaxi";
	char	*dest2;

	dest2 = ft_strdup(str);
	printf("Minha pŕopria função strdup(): %s\n", dest2);
	free(dest2);

	dest2 = strdup(str);
	printf("Função strdup() original: %s\n", dest2);
	free(dest2);

	return (0);
}*/
