/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_fract.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes-j <egomes-j@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:02:43 by egomes-j          #+#    #+#             */
/*   Updated: 2023/02/04 10:06:09 by egomes-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_atoi_fract(const char *str)
{
	int	nbr;
	int	neg;
	int	receive;

	nbr = 0;
	neg = 1;
	receive = 0;
	while ((str[nbr] >= 9 && str[nbr] <= 13) || str[nbr] == 32)
		nbr++;
	if (str[nbr] == '-')
		neg = -1;
	if (str[nbr] == '+' || str[nbr] == '-')
		nbr++;
	while (ft_isdigit_fract(str[nbr]) && str[nbr] != 0)
	{
		receive = receive * 10 + (str[nbr] - '0');
		nbr++;
	}	
	return (receive * neg);
}

int	ft_isdigit_fract(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
