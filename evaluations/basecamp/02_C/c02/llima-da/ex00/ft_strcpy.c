/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-da <coder@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 02:06:25 by llima-da          #+#    #+#             */
/*   Updated: 2021/12/12 00:54:20 by llima-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main(void)
{
	char src[] = "Frase de inicio.";
	char dest[] = "Frase que seria no final.";
	char *ret;

	printf("Antes\ndes: %s\n", dest);

    ret = ft_strcpy(dest, src);

	printf("Depois\ndes: %s\n", ret);
	return (0);
}