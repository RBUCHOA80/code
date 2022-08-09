/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 20:45:54 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/15 16:58:36 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* void	ft_putnbr(int nb);

int	main(void)
{
	int	nb;

	nb = -2147483648;
	ft_putnbr(nb);
	return (0);
} */

void	ft_putnbr(int nb)
{
	int				count;
	int				nbr;
	char			number[10];
	unsigned int	nb1;

	count = 0;
	nbr = 0;
	if (nb < 0)
	{
		nb1 = -nb;
		write(1, "-", 1);
	}
	else if (nb == 0)
		write(1, "0", 1);
	else
		nb1 = nb;
	while (nb1 != 0)
	{
		nbr = (nb1 % 10);
		number[9 - count] = nbr + 48;
		nb1 = nb1 / 10;
		count++;
	}
	write(1, &(number[10 - count]), count);
}
