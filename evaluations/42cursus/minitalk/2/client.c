/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 06:53:02 by cmenezes          #+#    #+#             */
/*   Updated: 2022/12/07 23:26:18 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_atoi(const char *str)
{
	int		result;
	int		i;
	int		minus;

	minus = 1;
	i = 0;
	result = 0;
	while ((str[i] == ' ') || ((str[i] >= 9) && (str[i] <= 13)))
		i++;
	if (str[i] == '-')
	{
		minus = (-1);
		i++;
		if (str[i] == '+')
			return (0);
	}
	if (str[i] == '+')
		i++;
	while ((str[i] != '\0') && (str[i] >= '0') && (str[i] <= '9'))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * minus);
}

int	valid_args(int n)
{
	int	nr;

	nr = n;
	if (nr == 3)
		return (0);
	write (1, "\n** error **\nPlease use: client <pid> \"Message\".\n\n", 50);
	return (1);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		bit;
	char	*letter;

	if (valid_args(argc) == 1)
		return (1);
	letter = argv[2];
	i = 0;
	while (letter[i] != '\0')
	{
		bit = 7;
		while (bit >= 0)
		{
			if (((letter[i] >> bit & 1) + 48) == '0')
				kill (ft_atoi(argv[1]), SIGUSR1);
			if (((letter[i] >> bit & 1) + 48) == '1')
				kill (ft_atoi(argv[1]), SIGUSR2);
			usleep (500);
			bit--;
		}
		i++;
	}
	return (0);
}
