/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 13:29:40 by vgoncalv          #+#    #+#             */
/*   Updated: 2022/03/28 23:55:10 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	*nbr;
	int	n;

	nbr = &n;
	ft_ft(nbr);
	printf("n: %d, *nbr: %d, n_address: %p\n", n, *nbr, nbr);
	return (0);
}
