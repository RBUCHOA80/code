/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 23:06:08 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/01 08:43:53 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char			dest_ori[45];
	char			dest[45];
	char			*src;
	unsigned int	n;

	src = "Put your sample test here!";
	n = 50;
	printf("%s\n", strncpy(dest_ori, src, n));
	printf("%s <- ft_strncpy\n", ft_strncpy(dest, src, n));
	return (0);
} */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i <= n && dest[i])
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
