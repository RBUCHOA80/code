/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaixao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:56:16 by lpaixao-          #+#    #+#             */
/*   Updated: 2023/10/17 12:36:00 by lpaixao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n > 0)
	{
		*str = '\0';
		str++;
		n--;
	}
}
/*

int	main()
{
	#include <stdio.h>

	char str[] = "The  bzero()  function  erases  the data...";

	printf("\nBefore bzero(): %s\n\n", str);

	ft_bzero(str + 13, 8*sizeof(char));

	printf("After my bzero():  %s \n\n", str);

	char str2[] = "The  bzero()  function  erases  the data...";

	bzero(str2 + 13, 8*sizeof(char));
	printf("After the original bzero(): %s \n\n", str2);

	return (0);
}*/
