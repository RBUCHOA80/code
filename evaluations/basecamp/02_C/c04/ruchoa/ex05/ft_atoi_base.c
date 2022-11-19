/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:25:31 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/07 02:01:25 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_error(int nbr, char *base);

int	ft_atoi(char *str);

int	ft_atoi_base(char *str, char *base)
{
	int	buffer;
	int	n_base;
	int	nbr;
	int	i;

	nbr = ft_atoi(str);
	n_base = ft_check_error(nbr, base);
	if (n_base)
	{
		buffer = 0;
		i = 1;
		while (nbr != 0)
		{
			buffer = buffer + (nbr % n_base) * i;
			nbr = nbr / n_base;
			i = i * 10;
		}
	}
	else
		return (0);
	return (buffer);
}

int	ft_check_error(int nbr, char *base)
{
	int	n_base;
	int	i;
	int	j;

	if (nbr == 0)
		return (0);
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

int	ft_atoi(char *str)
{
	int	is_negative;
	int	nbr;
	int	i;

	is_negative = 1;
	nbr = 0;
	i = 0;
	while (str[i] < '0' || '9' < str[i])
	{
		if ((32 < str[i] && str[i] < '0') && str[i] != '+' && str[i] != '-')
			return (0);
		if (str[i] == '-')
			is_negative *= (-1);
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		nbr = (nbr * 10) + (str[i] - 48);
		i++;
	}
	nbr = nbr * is_negative;
	return (nbr);
}

/* #include <stdio.h>

int	main(void)
{
	char *str;
	char *base;

	str = "2147483647";
	base = "01";
	printf("%d", ft_atoi_base(str, base));
	return (0);
} */

//1.111.111.111.1111.111.111.111.111.111.111
//                             2.147.483.648
//INT_MIN = -2147483648;
//INT_MAX = 2147483647;
//bin = "01"
//oct = "poneyvif"
//oct = "01234567"
//dec = "0123456789"
//dud = "0123456789ab"
//hex = "0123456789ABCDEF"
//vin = "0123456789abcdefghij"
