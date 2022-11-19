/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ver_01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 03:17:04 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/13 03:17:05 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc_int_number, char *argv_char_number[])
{
	if (argc_int_number != 2)
		write(1, "Error\n", 6);
	else
	{
		argc_int_number = argc_int_number + 48 - 1;
		write(1, "argc = ", 7);
		write(1, &argc_int_number, 1);
		write(1, "\n", 1);

		write(1, "Argumento[0] digtado = ", 23);
		write(1, argv_char_number[0], 7);
		write(1, "\n", 1);

		write(1, "Argumento[1] digtado = ", 23);
		write(1, argv_char_number[1], 31);
		write(1, "\n", 1);
	}
	return (0);
}
