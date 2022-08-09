/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:29:58 by danyrodr          #+#    #+#             */
/*   Updated: 2022/04/04 20:10:44 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
		j++;
		}
	i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	char palavra1[600] = "Uma história baseados baseadas em fatos reais";
	char palavra2[50] = "baseadas";
	char s1[600] = "Uma história baseados baseadas em fatos reais";
	char s2[50] = "baseadas";

	printf("função do C: %s\n", strstr(palavra1, palavra2));

	printf("função do ex04: %s\n", ft_strstr(s1, s2));

	return (0);
}
