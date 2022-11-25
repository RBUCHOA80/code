/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorette <amorette@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 10:04:37 by amorette          #+#    #+#             */
/*   Updated: 2022/06/16 10:05:06 by amorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int				result;
	int				signal;
	unsigned int	i;

	result = 0;
	signal = 1;
	i = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
		signal = -1;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (ft_isdigit(nptr[i]))
	{
		result = result * 10 + nptr[i] - '0';
		i++;
	}
	return (result * signal);
}

/* #include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char	s[100] = "  \t\n\r\v\f   -2147483649kjknhjygbmngh45";
	printf("atoi: \t\t%d\n", atoi(s));
	printf("ft_atoi:\t%d\n", ft_atoi(s));
	return (0);
} */
/*  gcc -Wall -Wextra -Werror ft_atoi.c ft_isdigit.c && ./a.out */
