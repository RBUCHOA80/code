/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:55:55 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/09 16:55:55 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	nbr;
	int	d;
	int	u;

	nbr = 0;
	ft_ft(&nbr);
	d = (nbr / 10) + 48;
	u = (nbr % 10) + 48;
	write(1, &d, 1);
	write(1, &u, 1);
	return (0);
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
