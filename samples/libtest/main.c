/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 22:39:39 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/15 23:22:38 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lib.h"

int	main(void)
{
	int	nbr1;
	int	nbr2;

	nbr1 = 3;
	nbr2 = 3;
	printf("prod -> %i x %i = %i\n", nbr1, nbr2, ft_prod(nbr1, nbr2));
	printf("soma -> %i + %i = %i\n", nbr1, nbr2, ft_soma(nbr1, nbr2));
	return (0);
}
