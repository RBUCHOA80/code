/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 02:29:37 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/21 22:59:34 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>	//malloc

#include <stdio.h>	//printf

char	*ft_strdup(char *src);

int		ft_strncmp(char *s1, char *s2, unsigned int n);

char	**ft_split(char *str, char *charset)
{
	char			**ret;
	int				index;
	unsigned int	charset_len;

	charset_len = 0;
	while (charset_len)
		charset_len++;
	index = 0;
	while (*str)
	{
		if (*str == *charset)
		{
			ft_strncmp(str, charset, charset_len);
		}
	}
	return (ret);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

char	*ft_strdup(char *src)
{
	int		length;
	int		i;
	char	*s;

	if (src == 0)
		return (0);
	length = 0;
	while (src[length])
		length++;
	s = malloc(length + 1);
	i = 0;
	while (src[i])
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

int	main(void)
{
	char	*str;
	char	*charset;
	char	**ret;

	str = "Sua Primeira frase de testes aqui., Segunda frase para testes, \
		Terceiro conjunto de caracteres,  , Quarto agrupamento de caracteres";
	charset = ", ";
	ret = ft_split(str, charset);
	while (**ret)
		printf("%d", **ret);
	return (0);
}
