/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:51:07 by vchastin          #+#    #+#             */
/*   Updated: 2023/03/04 17:53:50 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_int_min_max(long long n)
{
	if (n > MAX_INT || n < MIN_INT)
		write_error();
	return (n);
}

int	ft_atoi(const char *str)
{
	int			i;
	long long	result;
	int			sign;
	int			count;

	i = 0;
	count = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i++] - '0');
		count++;
	}
	if (str[i] != '\0' || count == 0 || count > 10)
		write_error();
	return (check_int_min_max(result * sign));
}
