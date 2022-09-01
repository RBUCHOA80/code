/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:28:11 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/01 00:18:24 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr_base(int nb, char	*base)
{
	char	nbr[33];
	int		len;
	int		i;

	len = 0;
	while (base[len])
		len++;
	i = 0;
	if (nb == 0)
		write(1, "0", 1);
	if (nb < 0)
	{
		write(1, "-", 1);
		nbr[31 - i] = base[(nb % len) * (-1)];
		nb = (nb / len) * (-1);
		i++;
	}
	while (nb != 0)
	{
		nbr[31 - i] = base[(nb % len)];
		nb = (nb / len);
		i++;
	}
	nbr[32] = '\0';
	write(1, &nbr[31 - i], i);
	printf("%s\n", &nbr[31 - i]);
}

/* void	ft_putnbr_base(unsigned long long int nbr, char *base)
{
	int	len;

	len = 0;
	while (base[len])
		len++;
	if (nbr == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	if (nbr > 0)
		ft_putnbr_base((nbr /= len), base);
	if (nbr != 0)
		write(1, &base[nbr % len], 1);
} */

int		g_nbr[] = {\
					16, \
					};

char	*g_base[] = {\
					"0123456789abcdefghij", \
					"0123456789abcdef", \
					"0123456789", \
					"01234567", \
					"poneyvif", \
					"01", \
					};

int	main(void)
{
	int	size;
	int	i;
	int	j;

	size = (sizeof(g_nbr) / sizeof(*g_nbr));
	i = 0;
	while (i < size)
	{
		j = 0;
		while (g_base[j])
		{
			ft_putnbr_base(g_nbr[i], g_base[j]);
			write(1, "\n", 1);
			j++;
		}
		write(1, "----------------------------\n", 30);
		i++;
	}
	return (0);
}
