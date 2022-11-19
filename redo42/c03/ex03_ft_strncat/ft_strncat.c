/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 22:20:11 by ruchoa            #+#    #+#             */
/*   Updated: 2022/03/12 22:35:28 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	dest_ori[80] = "Put your dest sample text here!";
	char	dest[80] = "Put your dest sample text here!";
	char	*src;
	int		n;

	src = "Put your src sample text here!";
	n = 31;
	printf("%s\n", strncat(dest_ori, src, n));
	printf("%s <- ft_strncat\n", ft_strncat(dest, src, n));
	return (0);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	length;
	unsigned int	i;

	length = 0;
	while (dest[length])
		length++;
	i = 0;
	while (src[i] && i < nb)
	{
		dest[length + i] = src[i];
		i++;
	}
	dest[length + i] = '\0';
	return (dest);
}
