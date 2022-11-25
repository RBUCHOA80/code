/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 23:06:00 by ruchoa            #+#    #+#             */
/*   Updated: 2022/03/11 23:41:38 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	printf("%s\n", str);
	ft_strcapitalize(str);
	printf("%s <- ft_strcapitalize\n", str);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
		if ('a' <= str[0] && str[0] <= 'z')
			str[0] -= 32;
		if ('a' <= str[i] && str[i] <= 'z'
			&& ((str[i - 1] < '0')
				|| ('9' < str[i - 1] && str[i - 1] < 'A')
				|| ('Z' < str[i - 1] && str[i - 1] < 'a')
				|| ('z' < str[i - 1])))
			str[i] -= 32;
		i++;
	}
	return (str);
}
