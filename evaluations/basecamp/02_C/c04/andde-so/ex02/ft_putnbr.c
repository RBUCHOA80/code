/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andde-so <andde-so@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 22:06:03 by andde-so          #+#    #+#             */
/*   Updated: 2022/04/06 13:39:11 by andde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		remain;
	int		result;
	int		base_size;
	char	c;

	base_size = 10;
	remain = nb % base_size;
	result = nb / base_size;
	if (nb < 0)
	{
		write(1, "-", 1);
		result *= -1;
		remain *= -1;
	}
	if (result > 0)
		ft_putnbr(result);
	c = remain + '0';
	write(1, &c, 1);
}

/* #include <limits.h>

int	main(void)
{
	ft_putnbr(-100);
	write(1, "\n", 1);
	ft_putnbr(-5);
	write(1, "\n", 1);
	ft_putnbr(0b11);
	write(1, "\n", 1);
	ft_putnbr(INT_MAX);
	write(1, "\n", 1);
	ft_putnbr(INT_MIN);
	write(1, "\n", 1);
} */
