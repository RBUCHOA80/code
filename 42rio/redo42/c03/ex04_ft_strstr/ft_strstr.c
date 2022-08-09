/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 22:37:30 by ruchoa            #+#    #+#             */
/*   Updated: 2022/05/07 23:29:15 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	*to_find;
	char	*str;

	str = "Put your sample text here!";
	to_find = "e!";
	printf("%s\n", strstr(str, to_find));
	printf("%s <- ft_strstr\n", ft_strstr(str, to_find));
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	length;
	int	i;
	int	j;

	length = 0;
	while (to_find[length])
		length++;
	i = 0;
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i + j] == to_find[j])
				j++;
			if (j >= length)
				return (&str[i]);
		}
		i++;
	}
	return (str);
}
