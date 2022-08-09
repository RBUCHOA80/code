/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andde-so <andde-so@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 22:06:15 by andde-so          #+#    #+#             */
/*   Updated: 2022/02/17 17:43:12 by andde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_valid_base(char *base, int base_size);
int	ft_strlen(char *str);
int	ft_char_index(char c, char *base);
int	ft_str_contains_char(char c, char *str);

int	ft_atoi_base(char *str, char *base)
{
	int	signal;
	int	nbr;
	int	i;
	int	base_size;

	signal = 1;
	nbr = 0;
	i = 0;
	base_size = ft_strlen(base);
	if (!ft_is_valid_base(base, base_size))
		return (0);
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signal *= -1;
		i++;
	}
	while (str[i] && ft_str_contains_char(str[i], base))
	{
		nbr = nbr * base_size + (ft_char_index(str[i], base));
		i++;
	}
	return (nbr * signal);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_is_valid_base(char *base, int base_size)
{
	int	i;
	int	j;

	i = 0;
	if (base_size < 2)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = 0;
		while (j < i)
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_char_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	return (i);
}

int	ft_str_contains_char(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/* #include<stdio.h>
#include<stdlib.h>

int	main(void)
{
	printf("%d\n", ft_atoi_base("2147483647", "0123456789"));
	printf("%d\n", ft_atoi_base("-2147483648", "0123456789"));
	printf("%d\n", ft_atoi_base("101010", "01"));
	printf("%d\n", ft_atoi_base("2A", "0123456789ABCDEF"));
	return (0);
} */
