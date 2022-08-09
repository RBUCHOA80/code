/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 22:13:07 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/05 00:42:51 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	dest_ori[100] = "Sample text: ";
	char	dest[100] = "Sample text: ";
	char	*src;

	src = "Put you sample text here.";
	printf("%s\n", strcat(dest_ori, src));
	printf("%s <- ft_strcat\n", ft_strcat(dest, src));
	return (0);
} */

char	*ft_strcat(char *dest, char *src)
{
	int	length;
	int	i;

	length = 0;
	while (dest[length])
		length++;
	i = 0;
	while (src[i])
	{
		dest[length + i] = src[i];
		i++;
	}
	dest[length + i] = '\0';
	return (dest);
}
