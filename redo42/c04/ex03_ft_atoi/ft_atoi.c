/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:43:58 by ruchoa            #+#    #+#             */
/*   Updated: 2022/03/13 21:26:23 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str);

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%d\n", ft_atoi(argv[1]));
	return (0);
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

/*
gcc -Wall -Werror -Wextra *.c ; ./a.out " ---+--+1234ab567" ; rm a.out
gcc -Wall -Werror -Wextra *.c ; ./a.out "2147483647" ; rm a.out
gcc -Wall -Werror -Wextra *.c ; ./a.out "1234567890" ; rm a.out
gcc -Wall -Werror -Wextra *.c ; ./a.out "0" ; rm a.out
gcc -Wall -Werror -Wextra *.c ; ./a.out "-1234567890" ; rm a.out
gcc -Wall -Werror -Wextra *.c ; ./a.out "-2147483648" ; rm a.out
*/
