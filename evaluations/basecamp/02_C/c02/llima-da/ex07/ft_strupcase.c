/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-da <coder@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 22:31:42 by llima-da          #+#    #+#             */
/*   Updated: 2021/12/12 00:58:49 by llima-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

int main(void){
	char str[] = "sa$\%¨456ladaB{[<-";
	char *ret;
	int i;

	ret = ft_strupcase(str);

	i = 0;
	while (ret[i] != '\0')
	{
		printf("%c", ret[i]);
		i++;
	}
	printf("\n");
}