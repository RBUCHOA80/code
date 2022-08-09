/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-da <coder@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 05:01:20 by llima-da          #+#    #+#             */
/*   Updated: 2021/12/17 22:20:48 by llima-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int		main(void)
{
	char src[] = "Frase de inicio.";
	char dest[] = "Frase que seria no final.";
	unsigned int n;
	char *ret;

	n = 10;

	printf("Antes\ndes: %s\n", dest);

    ret = ft_strncpy(dest, src, n);

	printf("Depois\ndes: %s\n", ret);
	return (0);
}