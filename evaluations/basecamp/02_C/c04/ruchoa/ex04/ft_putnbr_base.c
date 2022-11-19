/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:42:41 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/07 02:01:39 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_error(int nbr, char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	char	buffer[32];
	int		index;
	int		n_base;

	n_base = ft_check_error(nbr, base);
	if (n_base)
	{
		index = 0;
		while (nbr != 0)
		{
			if (nbr < 0)
			{
				buffer[(32 - 1) - index++] = base[-(nbr % n_base)];
				nbr = nbr / n_base * (-1);
				write(1, "-", 1);
			}
			buffer[(32 - 1) - index++] = base[(nbr % n_base)];
			nbr = nbr / n_base;
		}
		write(1, &buffer[32 - index], index);
	}
	else
		return ;
}

int	ft_check_error(int nbr, char *base)
{
	int	n_base;
	int	i;
	int	j;

	if (nbr == 0)
	{
		write(1, &base[0], 1);
		return (0);
	}
	n_base = 0;
	while (base[n_base])
		n_base++;
	i = -1;
	while (i++ < n_base - 1)
	{
		j = i;
		while (j++ < n_base)
		{
			if (base[i] == base [j] || base == 0 || base[i] == '+'
				|| base[i] == '-' || base[i] < 33 || base[i] > 126
				|| n_base < 2)
				return (0);
		}
	}
	return (n_base);
}

/* int	main(void)
{
	int		nbr;
	char	*base;

	nbr = 2147483647;
	base = "0123456789ABCDEF";
	ft_putnbr_base(nbr, base);
	write(1, "\n", 1);
	return (0);
} */

//INT_MIN = -2147483648;
//INT_MAX = 2147483647;
//bin = "01"
//oct = "poneyvif"
//oct = "01234567"
//dec = "0123456789"
//dud = "0123456789ab"
//hex = "0123456789ABCDEF"
//vin = "0123456789abcdefghij"
