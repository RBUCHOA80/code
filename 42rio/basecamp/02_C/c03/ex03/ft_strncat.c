/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 22:41:00 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/18 22:41:01 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				count;

	count = 0;
	i = 0;
	while (dest[count] != '\0')
		count++;
	while (src[i] != '\0' && i < nb)
	{
		dest[count] = src[i];
		count++;
		i++;
	}
	dest[count] = '\0';
	return (dest);
}

// #include<string.h>
// #include<stdio.h>
// int main(void)
// {
// 	char a[50] = "Frase teste a";
// 	char b[50] = "Frase teste b";
// 	char c[50] = "Frase teste c";
// 	char d[50] = "Frase teste d";
// 	unsigned int teste = 6;
// 	printf("%s \n",ft_strncat(a,b,teste));
// 	printf("%s \n",strncat(c,d,teste));
// 	return(0);
// }