/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 18:50:50 by ruchoa            #+#    #+#             */
/*   Updated: 2023/03/25 19:01:21 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(int argc, char **argv, char**arge)
{
	int i;

	printf("(A)\n");
	printf("argc = %i\n", argc);
	i = 0;
	while (argv[i])
	{
		printf("\targv[%i] = %s\n", i, argv[i]);
		i++;
	}
	i = 0;
	while (arge[i])
	{
		printf("\t\targe[%i] = %s\n", i, arge[i]);
		i++;
	}
	return (0);
}
