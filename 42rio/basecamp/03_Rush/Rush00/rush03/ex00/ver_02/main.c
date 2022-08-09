/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <rodrigo.uchoa@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:58:25 by marolive          #+#    #+#             */
/*   Updated: 2022/02/06 17:39:17 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	rush(int x, int y);

int	main(void)
{
	printf("\n-8, -5\n");
	rush(-8, -5);
	printf("\n0, 0\n");
	rush(0, 0);
	printf("\n1, 1\n");
	rush(1, 1);
	printf("\n5, 1\n");
	rush(5, 1);
	printf("\n5, 3\n");
	rush(5, 3);
	printf("\n5, 8\n");
	rush(5, 8);
	printf("\n1, 5\n");
	rush(1, 5);
	printf("\n2, 2\n");
	rush(2, 2);
	printf("\n4, 4\n");
	rush(4, 4);
	return (0);
}
