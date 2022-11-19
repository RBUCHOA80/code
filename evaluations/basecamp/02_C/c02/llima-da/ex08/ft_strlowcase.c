/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-da <coder@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 22:33:21 by llima-da          #+#    #+#             */
/*   Updated: 2021/12/12 00:59:37 by llima-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int main(void){
	char str[] = "saJ\nHG¨&{[<la45daB-";
	char *ret;
	int i;

	ret = ft_strlowcase(str);

	i = 0;
	while (ret[i] != '\0')
	{
		printf("%c", ret[i]);
		i++;
	}
	printf("\n");
}