/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 22:38:10 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/18 22:38:32 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	count;

	count = 0;
	while (dest[count] != '\0')
		count++;
	while (*src != '\0')
	{
		dest[count] = *src;
		count++;
		src++;
	}
	dest[count] = '\0';
	return (dest);
}

// #include<stdio.h>
// int main(void)
// {
// 	char a[50] = "Frase de teste";
// 	char b[50] = "Frase de teste";
// 	printf("%s",ft_strcat(a,b));
// 	return(0);
// }