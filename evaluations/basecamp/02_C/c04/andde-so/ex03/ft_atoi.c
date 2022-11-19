/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 22:06:08 by andde-so          #+#    #+#             */
/*   Updated: 2022/05/08 17:29:25 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_numeric(char c);
int	ft_is_space(char c);
int	ft_is_signal(char c);

int	ft_atoi(char *str)
{
	int	signal;
	int	nbr;
	int	i;

	signal = 1;
	nbr = 0;
	i = 0;
	while (ft_is_space(str[i]))
		i++;
	while (ft_is_signal(str[i]))
	{
		if (str[i] == '-')
			signal *= -1;
		i++;
	}
	while (ft_is_numeric(str[i]))
	{
		nbr = nbr * 10 + (str[i] - 48);
		i++;
	}
	return (signal * nbr);
}

int	ft_is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_is_space(char c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

int	ft_is_signal(char c)
{
	return (c == '+' || c == '-');
}

/* #include<stdio.h>
#include<stdlib.h>

int	main(void)
{
	int x = ft_atoi("a\r\t\f\r    -+---+122344");
	printf("%d\n", x);
	x = ft_atoi("-+--+122344");
	printf("%d\n", x);
	x = ft_atoi("---+--+1234ab567");
	printf("%d\n", x);
	x = ft_atoi("5");
	printf("%d\n", x);
	x = atoi(" -122344");
	printf("%d\n", x);
	x = atoi("1234ab567");
	printf("%d\n", x);
	return (0);
} */
