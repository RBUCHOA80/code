/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 18:51:24 by coder             #+#    #+#             */
/*   Updated: 2022/04/05 18:51:24 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putdigit(int n)
{
	int	digit;

	digit = '0' - n;
	write(1, &digit, sizeof(int));
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	div;

	if (nb < 0)
		ft_putchar('-');
	else
		nb = nb * -1;
	div = 1;
	while (nb / div <= -10)
		div = div * 10;
	while (div >= 1)
	{
		ft_putdigit(nb / div);
		nb = nb % div;
		div = div / 10;
	}
}

// int	main(void)
// {
// 	ft_putnbr(-2147483648);
// 	write(1, "\n", 1);
// 	return (0);
// }
