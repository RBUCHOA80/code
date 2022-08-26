/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnegative.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 09:36:47 by cnascime          #+#    #+#             */
/*   Updated: 2022/08/24 18:04:06 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf_bonus.h"

int	ft_isnegative(long num)
{
	if (num > 0)
		return (1);
	return (0);
}

void	ft_isnegativeforprintf(int number, t_flags *flags)
{
	if (number < 0)
	{
		flags->precision++;
		flags->minwidth++;
	}
}
