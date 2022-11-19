/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimachad <fimachad@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:39:17 by fimachad          #+#    #+#             */
/*   Updated: 2021/12/14 11:58:05 by fimachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*(src + i) != '\0' && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i <= n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	a[] = {"vgurghjgdfgsdfsdfg"};
	char	b[] = {"Leticia"};

	printf("Antes: %s\n", a);
	ft_strncpy(a, b, 5);
	printf("Depois: %s\n", a);
	return (0);
}

