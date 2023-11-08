/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaixao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:41:51 by lpaixao-          #+#    #+#             */
/*   Updated: 2023/10/25 20:29:03 by lpaixao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	int	count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
/*
int	main(int argc, char *argv[])
{
	#include <string.h>

//	char	string[] = "ABACAXI GELADO";
	long unsigned int	count_returned;

	if (argc != 2)
	{
		printf("Favor digitar apenas um argumento");
	}
	count_returned = ft_strlen(argv[1]);
	printf("Minha função: %li\n", count_returned);
	printf("Função Original: %li\n", strlen(argv[1]));
	return (0);
}*/
