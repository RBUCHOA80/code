/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 21:46:52 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/14 21:46:52 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char			src[] = "Coloque sua frase para testes aqui";
	char			dest[10];
	int				i;
	unsigned int	n;

	n = 40;
	ft_strncpy(dest, src, n);
	i = 0;
	while (dest[i])
	{
		write(1, &dest[i], 1);
		i++;
	}
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
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
