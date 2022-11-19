/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 03:18:39 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/13 20:25:52 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_error(int argc_int_number, char *argv[]);

void	int_number_to_char_number(int int_number);

void	border(char *argv[]);

int	main(int argc_int_number, char *argv[])
{
	if (check_error(argc_int_number, argv))
		return (-1);
	else
		border(argv);
	return (0);
}

int	check_error(int argc_int_number, char *argv[])
{
	int	n;

	n = 0;
	if (argc_int_number != 2)
	{
		write(1, "Erro1\n", 6);
		return (-1);
	}
	while (argv[1][n] != '\0')
	{
		if ((argv[1][n] != ' ' && argv[1][n] < '1')
			|| ('4' < argv[1][n] && argv[1][n] != ' '))
		{
			write(1, "Erro2\n", 6);
			return (-1);
		}
		n++;
	}
	if (n != 31)
	{
		write(1, "Erro3\n", 6);
		return (-1);
	}
	return (0);
}

void	border(char *argv[])
{
	write(1, &argv[1][0], 31);
	write(1, "ft_border()", 11);
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
