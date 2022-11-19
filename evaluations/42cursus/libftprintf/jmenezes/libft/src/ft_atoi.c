/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 16:58:16 by jmenezes          #+#    #+#             */
/*   Updated: 2022/08/20 16:59:07 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nbr)
{
	int			sign;
	long int	n;

	while (ft_isspace(*nbr))
		nbr++;
	sign = 1;
	if (*nbr == '+' || *nbr == '-')
	{
		if (*nbr == '-')
			sign = -1;
		nbr++;
	}
	n = 0;
	while (ft_isdigit(*nbr))
	{
		n = n * 10 + (*nbr - '0') * sign;
		if (sign == -1 && n > 0)
			return (0);
		else if (sign == 1 && n < 0)
			return (-1);
		nbr++;
	}
	return (n);
}
