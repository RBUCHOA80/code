/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:00:45 by vgoncalv          #+#    #+#             */
/*   Updated: 2022/03/29 00:03:05 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	*a;
	int	*b;

	a = calloc(1, sizeof(int));
	b = calloc(1, sizeof(int));
	*a = 42;
	*b = 10;
	printf("a: %p, *a: %d, b: %p, *b: %d\n", a, *a, b, *b);
	ft_ultimate_div_mod(a, b);
	printf("a: %p, *a: %d, b: %p, *b: %d\n", a, *a, b, *b);
	return (0);
}
