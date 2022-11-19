/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:28:11 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/01 18:11:08 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

 void	ft_putnbr_base(int nbr, char *base)
{
	char	ret[33];
	int		count;
	int		i;

	count = 0;
	while (base[count])
		count++;
	i = 0;
	if (nbr == 0)
	{
		ret[31 - i] = '0';
		i++;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		ret[31 - i] = base[(nbr % count) * (-1)];
		nbr = (nbr / count) * (-1);
		i++;
	}
	while (nbr != 0)
	{
		ret[31 - i] = base[(nbr % count)];
		nbr = (nbr / count);
		i++;
	}
	ret[32] = '\0';
	write(1, &ret[32 - i], i);
}

int		g_nbr[] = {\
					-11, \
					-9, \
					-1, \
					0, \
					1, \
					9, \
					10, \
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
