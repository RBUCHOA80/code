/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 22:59:28 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/05 01:18:11 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	*str;
	char	*to_find;

	str = "Put your sample source text here.";
	to_find = "";
	printf("%s\n", strstr(str, to_find));
	printf("%s <- ft_strstr\n", ft_strstr(str, to_find));
	return (0);
} */

char	*ft_strstr(char *str, char *to_find)
{
	int	length;
	int	i;
	int	j;

	if (*to_find == '\0')
		return (str);
	length = 0;
	while (to_find[length])
		length++;
	i = 0;
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i + j] == to_find[j] && j < length)
				j++;
			if (j == length)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
