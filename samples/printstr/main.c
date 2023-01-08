/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 15:57:36 by ruchoa            #+#    #+#             */
/*   Updated: 2023/01/08 16:11:53 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_print_str(char **argv)
{
	int	i;

	i = 0;
	while (*argv)
		printf("argv[%i] = %s\n", i++, *argv++);
}

char	*argv[] = {\
					"Amanda", \
					"Bruna", \
					"Chana", \
					};

int	main(void)
{
	ft_print_str(argv);
	return(0);
}
