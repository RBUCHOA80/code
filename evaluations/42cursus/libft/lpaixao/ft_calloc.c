/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaixao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 20:02:35 by lpaixao-          #+#    #+#             */
/*   Updated: 2023/11/04 21:11:40 by lpaixao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*str;				

	i = 0;
	if (nmemb == 0 || size == 0)
		return (ft_strdup(""));
	if (size != 0 && (nmemb * size) / size != nmemb)
		return (NULL);
	str = (char *)malloc(nmemb * size);
	if (!str)
		return (NULL);
	while (i < (nmemb * size))
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
/*
#include <limits.h>
#include <stdio.h>

int	main()
{
	int	n;
	int	*my_str;
	int	*or_str;

	n = 5;
	my_str = ft_calloc(UINT_MAX, UINT_MAX);
	or_str = calloc(n, 4);

	if (!my_str)
		return (123);
	printf("Minha própria função calloc(): ");
	while (n > 0)
		printf("%i", my_str[n--]);
	printf("\n");
	//printf("Função calloc() original: %i\n", or_str[n]);
	free(my_str);
	free(or_str);
	return (0);
}*/
/*
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
//War Machine
int		main(int argc, const char *argv[])
{
	char	*str;

	alarm(5);
	if (argc == 1)
		return (0);
	else if (atoi(argv[1]) == 1)
	{
		str = (char *)ft_calloc(30, 1);
		if (!str)
			write(1, "NULL", 4);
		else
			write(1,"blabla", 30);
	}
	return (0);
}*/
