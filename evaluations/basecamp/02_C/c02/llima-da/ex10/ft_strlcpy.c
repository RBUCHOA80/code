/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 18:16:36 by llima-da          #+#    #+#             */
/*   Updated: 2022/04/30 21:19:26 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	length;
	unsigned int	i;

	length = 0;
	i = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (length);
}

int		main(void)
{
	char src[] = "Ola Mundo";
	char dest[] = "oi";
	unsigned int size;
	size = 8;

	printf("Antes\ndes: %s \nsize: %d \n", dest, size);

    size = ft_strlcpy(dest, src, size); 

	printf("Depois\ndes: %s \nsize: %d \n", dest, size);

	return (0);
}