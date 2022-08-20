/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilveir <csilveir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 10:47:41 by csilveir          #+#    #+#             */
/*   Updated: 2022/06/01 10:39:39 by csilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	numb;
	int	sig;

	i = 0;
	numb = 0;
	sig = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == 45)
	{
		sig = sig * (-1);
		str++;
		if (*str == 43)
			return (0);
	}
	if (*str == 43)
		str++;
	while (str[i] != '\0' && str[i] > 47 && str[i] < 58)
	{
		numb = numb * 10 + (str[i] - 48);
		i++;
	}
	return (numb * sig);
}
