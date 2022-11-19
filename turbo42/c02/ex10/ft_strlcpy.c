/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 23:46:57 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/01 08:47:22 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <bsd/string.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			dest_ori[42];
	char			dest[42];
	char			*src;
	unsigned int	size;

	src = "Put your sample text here!";
	size = 60;
	strlcpy(dest_ori, src, size);
	printf("%s\n", dest_ori);
	printf("%li\n", strlcpy(dest_ori, src, size));
	ft_strlcpy(dest, src, size);
	printf("%s <- ft_strlcpy\n", dest);
	printf("%i\n", ft_strlcpy(dest, src, size));
	return (0);
} */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	length;
	unsigned int	i;

	i = 0;
	length = 0;
	while (src[length])
		length++;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (length);
}

/*
Para testar a strlcpy original, você deve compilar o exercício com a flag -lbsd.
ex: gcc -Wall -Werror -Wextra *.c -lbsd ; ./a.out ; rm a.out
sudo apt install libbsd-dev
*/
