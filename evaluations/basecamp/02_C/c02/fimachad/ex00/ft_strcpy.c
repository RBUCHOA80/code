/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimachad <fimachad@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:39:08 by fimachad          #+#    #+#             */
/*   Updated: 2021/12/14 11:55:16 by fimachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	a[] = {"vgurghj\0gdfgsdfsdfg"};
	char	b[] = {"Leticia"};

	printf("Antes: %s\n", a);
	ft_strcpy(a, b);
	printf("Depois: %s\n", a);
	return (0);
}
