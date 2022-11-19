/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 21:10:34 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/01 08:43:41 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	dest_ori[45];
	char	dest_ft[45];
	char	*src;

	src = "Put your sample text here, less than 45 chars";
	printf("%s\n", strcpy(dest_ori, src));
	printf("%s <- ft_strcpy\n", ft_strcpy(dest_ft, src));
	return (0);
} */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
