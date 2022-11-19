/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ver_03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 03:18:39 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/13 04:53:36 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_error(int argc_int_number, char *argv_char_nbr[]);

void	border(char *argv_char_nbr[]);

void	int_number_to_char_number(int int_number);

int	main(int argc_int_number, char *argv_char_nbr[])
{
	if (check_error(argc_int_number, argv_char_nbr))
		return (-1);
	else
		border(argv_char_nbr);
	return (0);
}

int	check_error(int argc_int_number, char *argv_char_nbr[])
{
	int	len;

	len = 0;
	if (argc_int_number != 2)
	{
		write(1, "Error\n", 7);
		return (-1);
	}
	else
	{
		while (argv_char_nbr[1][len] != '\0')
		{
			if (argv_char_nbr[1][len] < 32 || '4' < argv_char_nbr[1][len])
			{
				write(1, "Error2\n", 7);
				return (-1);
			}
			len++;
		}
	}
	return (0);
}

void	border(char *argv_char_nbr[])
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (argv_char_nbr[1][len] != '\0')
	{
		len++;
	}
	int_number_to_char_number(len);
	write(1, "\n", 1);
	while (i < len)
	{
		write(1, &argv_char_nbr[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	int_number_to_char_number(int int_number)
{
	char	char_number;

	char_number = (int_number / 10) + 48;
	write(1, &char_number, 1);
	char_number = (int_number % 10) + 48;
	write(1, &char_number, 1);
}
