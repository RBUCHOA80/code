/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 16:49:37 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/18 18:14:46 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
} */

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
		}
		else
		{
			write (1, "-", 1);
			nb = -nb;
		}
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	if (nb >= 0)
	{
		nb = nb % 10;
		nb = nb + 48;
		write(1, &nb, 1);
	}
}
