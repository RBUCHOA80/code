/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enquanto.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 19:54:47 by ruchoa            #+#    #+#             */
/*   Updated: 2023/02/27 20:06:26 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	i;
	int	limite;

	limite = 35;
	i = 1;
	while (1)
	{
		printf("i = %i | limite = %i | ", i, limite);
		if (i >= limite)
		{
			printf("i >= limite --- verdadeiro\n");
			break;
		}
		else
			printf("i >= limite --- falso\n");
		i = i + 1;
	}
	return (0);
}
