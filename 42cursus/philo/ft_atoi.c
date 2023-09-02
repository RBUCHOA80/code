/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 23:11:43 by ruchoa            #+#    #+#             */
/*   Updated: 2023/09/02 18:46:12 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || ('\t' <= c && c <= '\r'))
		return (-1);
	return (0);
}

static int	ft_issimbol(char c)
{
	if (c == '+' || c == '-')
		return (-1);
	return (0);
}

static int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (-1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	is_negative;
	int	nbr;

	is_negative = 1;
	nbr = 0;
	while (ft_isspace(*str))
		str++;
	if (ft_issimbol(*str))
	{
		if (*str++ == '-')
			is_negative *= (-1);
	}
	while (ft_isdigit(*str))
		nbr = (nbr * 10) + (*str++ - 48);
	return (is_negative * nbr);
}
