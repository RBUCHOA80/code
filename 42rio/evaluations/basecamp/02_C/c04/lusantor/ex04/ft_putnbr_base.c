/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 18:51:46 by coder             #+#    #+#             */
/*   Updated: 2022/04/05 18:51:46 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putdigit(int n, char *digit)
{
	digit = digit + -n;
	write(1, digit, 1);
}

int	find_base_total(char *base)
{
	int	total;

	total = 0;
	while (base[total] != '\0')
		total++;
	return (total);
}

void	ft_putnbr_base(int nb, char *base)
{
	long int	div;
	int			base_total;

	base_total = find_base_total(base);
	if (nb < 0)
		ft_putchar('-');
	else
		nb = nb * -1;
	div = 1;
	while (nb / div <= -base_total)
		div = div * base_total;
	while (div >= 1)
	{
		ft_putdigit(nb / div, base);
		nb = nb % div;
		div = div / base_total;
	}
}

int	main(void)
{
	ft_putnbr_base(5000, "0123456789ABCDEF");
	ft_putchar('\n');
	return (0);
}
