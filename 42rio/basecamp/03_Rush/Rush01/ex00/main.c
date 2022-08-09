/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 03:18:39 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/14 01:11:43 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check_error(int argc_int_number, char *argv[]);

void	ft_int_number_to_char_number(int int_number);

void	ft_border(char *argv[]);

int		matrix_0(void);

int		matrix_1(void);

int		matrix_2(void);

int		matrix_3(void);

int	main(int argc_int_number, char *argv[])
{
	if (ft_check_error(argc_int_number, argv))
		return (-1);
	else
		ft_border(argv);
	matrix_0();
	matrix_1();
	matrix_2();
	matrix_3();
	return (0);
}

int	ft_check_error(int argc_int_number, char *argv[])
{
	int	n;

	n = 0;
	if (argc_int_number != 2)
	{
		write(1, "Error\n", 6);
		return (-1);
	}
	while (argv[1][n] != '\0')
	{
		if ((argv[1][n] != ' ' && argv[1][n] < '1')
			|| ('4' < argv[1][n] && argv[1][n] != ' '))
		{
			write(1, "Error\n", 6);
			return (-1);
		}
		n++;
	}
	if (n != 31)
	{
		write(1, "Error\n", 6);
		return (-1);
	}
	return (0);
}

void	ft_border(char *argv[])
{
	write(1, &argv[1][0], 31);
	write(1, "\n", 1);
	write(1, "ft_border()", 11);
	write(1, "\n", 1);
}

void	ft_int_number_to_char_number(int int_number)
{
	char	char_number;

	char_number = (int_number / 10) + 48;
	write(1, &char_number, 1);
	char_number = (int_number % 10) + 48;
	write(1, &char_number, 1);
}
