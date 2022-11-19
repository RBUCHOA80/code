/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 14:33:49 by ruchoa            #+#    #+#             */
/*   Updated: 2022/03/06 15:09:02 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	nbr;

	nbr = 0;
	printf("Before = %i\n", nbr);
	ft_ft(&nbr);
	printf("After = %i\n", nbr);
	return (0);
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
