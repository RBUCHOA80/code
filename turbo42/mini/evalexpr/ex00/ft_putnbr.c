/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 11:39:08 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/15 12:49:58 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	nbr[10];
	int		index;

	if (nb == 0)
		write(1, "0", 1);
	index = 0;
	while (nb != 0)
	{
		if (nb < 0)
		{
			nbr[9 - index] = 48 + (nb % 10) * (-1);
			nb = (nb / 10) * (-1);
			write(1, "-", 1);
			index++;
		}
		nbr[9 - index] = 48 + (nb % 10);
		nb = nb / 10;
		index++;
	}
	write(1, &nbr[10 - index], index);
}
