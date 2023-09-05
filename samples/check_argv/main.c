/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 21:32:53 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/05 21:33:12 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "../../libft/libft.h"

int	main(int argc, char **argv)
{
	int	i;

	(void)argc;
	i = 0;
	while (argv[++i] != NULL)
	{
		printf("char *argv[%i] = \"%s\"\n", i, argv[i]);
		printf("int atoi      =  %i\n", atoi(argv[i]));
		printf("char *ft_itoa = \"%s\"\n", ft_itoa(atoi(argv[i])));
		printf("\"%s\" = = \"%s\"\n", ft_itoa(atoi(argv[i])), argv[i]);
		printf("int strcmp    = %i\n", strcmp(ft_itoa(atoi(argv[i])), argv[i]));
	}
	return (0);
}
