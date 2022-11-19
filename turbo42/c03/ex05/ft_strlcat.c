/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 09:48:58 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/05 01:42:06 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <bsd/string.h>
#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char dest_ori[100] = "Sample text: ";
	char dest[100] = "Sample text: ";
	char *src;
	unsigned int size;

	size = 100;
	src = "Put your sample text here.";
	printf("%li <=> %s\n", strlcat(dest_ori, src, size), dest_ori);
	printf("%i <=> %s <- ft_strlcat\n", ft_strlcat(dest, src, size), dest);
	return (0);
} */

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
	if (size > 0 && size > dest_len)
	{
		i = 0;
		while (src[i] && i < (size - dest_len - 1))
		{
			dest[dest_len + i] = src[i];
			i++;
		}
		dest[dest_len + i] = '\0';
		return (dest_len + src_len);
	}
	return (size + src_len);
}

/*
Para testar a strlcat original, você deve compilar o exercício com a flag -lbsd
gcc -Wall -Werror -Wextra test.c -lbsd
sudo apt install libbsd-dev
*/