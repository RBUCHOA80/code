/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 22:34:54 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/14 22:34:54 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	src[] = "Coloque sua frase para testes aqui";
	char	dest[10];
	int		n;

	ft_strcpy(dest, src);
	n = 0;
	while (dest[n])
	{
		write(1, &dest[n], 1);
		n++;
	}
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
