/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ver_02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 03:17:25 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/13 03:17:26 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc_int_number, char *argv_char_number[])
{
	if (argc_int_number != 2)
		write(1, "Error\n", 6);
	else
	{
		write(1, " ", 1);
		write(1, " ", 1);
		write(1, &argv_char_number[1][0], 1);
		write(1, " ", 1);
		write(1, &argv_char_number[1][2], 1);
		write(1, " ", 1);
		write(1, &argv_char_number[1][4], 1);
		write(1, " ", 1);
		write(1, &argv_char_number[1][6], 1);
		write(1, " ", 1);
		write(1, "\n", 1);

		write(1, &argv_char_number[1][16], 1);
		write(1, " ", 1);
		write(1, " ", 1);
		write(1, " ", 1);
		write(1, " ", 1);
		write(1, " ", 1);
		write(1, " ", 1);
		write(1, " ", 1);
		write(1, " ", 1);
		write(1, " ", 1);
		write(1, &argv_char_number[1][24], 1);
		write(1, "\n", 1);

		write(1, &argv_char_number[1][18], 1);
		write(1, " ", 1);
		write(1, " ", 1);
		write(1, " ", 1);
		write(1, " ", 1);
		write(1, " ", 1);
		write(1, " ", 1);
		write(1, " ", 1);
		write(1, " ", 1);
		write(1, " ", 1);
		write(1, &argv_char_number[1][26], 1);
		write(1, "\n", 1);

		write(1, &argv_char_number[1][20], 1);
		write(1, " ", 1);
		write(1, " ", 1);
		write(1, " ", 1);
		write(1, " ", 1);
		write(1, " ", 1);
		write(1, " ", 1);
		write(1, " ", 1);
		write(1, " ", 1);
		write(1, " ", 1);
		write(1, &argv_char_number[1][28], 1);
		write(1, "\n", 1);

		write(1, &argv_char_number[1][22], 1);
		write(1, " ", 1);
		write(1, " ", 1);
		write(1, " ", 1);
		write(1, " ", 1);
		write(1, " ", 1);
		write(1, " ", 1);
		write(1, " ", 1);
		write(1, " ", 1);
		write(1, " ", 1);
		write(1, &argv_char_number[1][30], 1);
		write(1, "\n", 1);

		write(1, " ", 1);
		write(1, " ", 1);
		write(1, &argv_char_number[1][8], 1);
		write(1, " ", 1);
		write(1, &argv_char_number[1][10], 1);
		write(1, " ", 1);
		write(1, &argv_char_number[1][12], 1);
		write(1, " ", 1);
		write(1, &argv_char_number[1][14], 1);
		write(1, " ", 1);
		write(1, "\n", 1);
	}
	return (0);
}
