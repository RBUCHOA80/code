/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 20:59:04 by ruchoa            #+#    #+#             */
/*   Updated: 2022/06/15 00:28:20 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	int				len;
	unsigned int	i;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str)
	{
		i = 0;
		while (s[i])
		{
			str[i] = f(i, s[i]);
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}

/* char	ft_reducetozero(unsigned int i, char c)
{
	char	ret;

	ret = c - i;
	return (ret);
}

int	main(void)
{
	char	(*f)(unsigned int, char);
	char	*s;

	s = "0123456789";
	f = ft_reducetozero;
	printf("%p\t%s \n", s, s);
	printf("%p\t%s \n", ft_strmapi(s, f), ft_strmapi(s, f));
	return (0);
} */
