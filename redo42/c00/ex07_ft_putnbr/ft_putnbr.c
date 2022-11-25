/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 19:45:15 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/19 19:07:23 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	nbr[10];
	int		i;

	if (nb == 0)
		write(1, "0", 1);
	i = 0;
	while (nb != 0)
	{
		if (nb < 0)
		{
			nbr[9 - i] = 48 + (nb % 10) * (-1);
			nb = nb / 10 * (-1);
			write(1, "-", 1);
			i++;
		}
		nbr[9 - i] = 48 + (nb % 10);
		nb = nb / 10;
		i++;
	}
	write(1, &nbr[10 - i], i);
}

int	main(void)
{
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	return (0);
}
