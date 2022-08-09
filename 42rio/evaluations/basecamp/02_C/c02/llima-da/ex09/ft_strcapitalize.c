/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciano <luciano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 22:38:31 by llima-da          #+#    #+#             */
/*   Updated: 2022/03/30 14:39:54 by luciano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[j] != '\0')
	{
		if (i == 0 && (str[j] >= 'a' && str[j] <= 'z'))
		{
			str[j] -= 'a' - 'A';
			i++;
		}
		else if (i > 0 && (str[j] >= 'A' && str[j] <= 'Z'))
			str[j] += 'a' - 'A';
		else if ((str[j] < '0') || (str[j] > '9' && str[j] < 'A')
			|| (str[j] > 'Z' && str[j] < 'a') || (str[j] > 'z'))
			i = 0;
		else
			i++;
		j++;
	}
	return (str);
}

int		main(void)
{
	char str[] = "oi, tudo bem? 42palRRavras quarenta-e-duas; cinquenta+e+um";
	char *ret;
	ret = ft_strcapitalize(str);
	printf("%s\n", ret);
}