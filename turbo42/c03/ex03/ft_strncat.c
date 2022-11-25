/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 22:32:08 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/05 00:54:42 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char			dest_ori[100] = "Sample text: ";
	char			dest[100] = "Sample text: ";
	char			*src;
	unsigned int	nb;

	nb = 50;
	src = "Put your sample text here.";
	printf("%s\n", strncat(dest_ori, src, nb));
	printf("%s <- ft_strncat\n", ft_strncat(dest, src, nb));
	return (0);
} */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	length;
	unsigned int	i;

	if (nb > 0)
	{
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
	}
	return (dest);
}
