/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:50:03 by ruchoa            #+#    #+#             */
/*   Updated: 2022/03/18 10:55:38 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			dest_ori[80] = "Destination sample text. ";
	char			dest[80] = "Destination sample text. ";
	char			*src;
	unsigned int	size;

	src = "Put your sample text here!";
	size = 100;
	printf("%li -> %s \n", strlcat(dest_ori, src, size), dest_ori);
	printf("%i -> %s <- ft_strlcat\n", ft_strlcat(dest, src, size), dest);
	return (0);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = 0;
	while (dest[dest_len])
		dest_len++;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (dest_len >= size)
		return (src_len + size);
	else
	{
		i = 0;
		while (src[i] && (dest_len + i + 1) < size)
		{
			dest[dest_len + i] = src[i];
			i++;
		}
		dest[dest_len + i] = '\0';
		return (src_len + dest_len);
	}
}

/*
Para testar a strlcat original, você deve compilar o exercício com a flag -lbsd.
ex: gcc -Wall -Werror -Wextra *.c -lbsd ; ./a.out ; rm a.out
*/
