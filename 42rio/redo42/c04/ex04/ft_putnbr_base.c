/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:28:11 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/05 21:54:03 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check(char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	char	nb[32];
	int		i;

	if (ft_check(base) == 0)
		return ;
	i = 0;
	while (nbr != 0)
	{
		if (nbr > 0)
		{
			if (nbr >= ft_check(base))
				nb[32 - 1 - i] = base[nbr % ft_check(base)];
			else
				nb[32 - 1 - i] = base[nbr];
		}
		if (nbr < 0)
		{
			if (nbr < -ft_check(base))
				nb[32 - 1 - i] = base[-nbr % ft_check(base)];
			else
				nb[32 - 1 - i] = base[-nbr];
		}
		nbr /= ft_check(base);
		i++;
	}
	write(1, &nb[32 - i], i);
}

int	ft_check(char *base)
{
	int	error;
	int	i;
	int	j;

	error = 0;
	i = 0;
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if (i != j && base[i] == base[j])
				error++;
			j++;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] <= 31 || base[i] >= 126)
			error++;
		i++;
	}
	if (i < 2 || error != 0)
		return (0);
	return (i);
}

int	main(void)
{
	int		nbr;

	nbr = 10;
	// ft_putnbr_base(nbr, "01");
	// write(1, "\n", 1);
	// ft_putnbr_base(nbr, "01234567");
	// write(1, "\n", 1);
	// ft_putnbr_base(nbr, "0123456789");
	// write(1, "\n", 1);
	ft_putnbr_base(nbr, "0123456789ABCDEF");
	write(1, "\n", 1);
	return (0);
}

/*
INT_MAX =  2147483647;
INT_MIN = -2147483648;
bin = "01";
oct = "poneyvif";
oct = "01234567";
bin = "0123456789";
hex = "0123456789ABCDEF";
hex = "FEDCBA9876543210";
*/
