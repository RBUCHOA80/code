/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_number_to_int_number.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:20:58 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/12 15:20:58 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int int_argc, char *char_arg_number)
{
	int n;

	n = 0;
	while (char_arg_number[n] != '\0')
		n++;
	n = n + 32;
	write(1, &n, 1);

	// int_argc = int_argc + 48 - 1;
	// write(1, "argc = ", 7);
	// write(1, &int_argc, 1);
	// write(1, "\n", 1);

	//inicio dos testes para escrever o argumento.
	// write(1, "Argumento[0] digtado = ", 23);
	// write(1, char_arg_number[0], 7);
	// write(1, "\n", 1);

	// write(1, " ", 1);
	// write(1, " ", 1);
	// write(1, char_arg_number[1], 1);
	// write(1, " ", 1);
	// write(1, char_arg_number[2], 1);
	// write(1, " ", 1);
	// write(1, char_arg_number[3], 1);
	// write(1, " ", 1);
	// write(1, char_arg_number[4], 1);
	// write(1, " ", 1);
	// write(1, "\n", 1);

	// write(1, char_arg_number[9], 1);
	// write(1, " ", 1);
	// write(1, " ", 1);
	// write(1, " ", 1);
	// write(1, " ", 1);
	// write(1, " ", 1);
	// write(1, " ", 1);
	// write(1, " ", 1);
	// write(1, " ", 1);
	// write(1, " ", 1);
	// write(1, char_arg_number[13], 1);
	// write(1, "\n", 1);

	// write(1, char_arg_number[10], 1);
	// write(1, " ", 1);
	// write(1, " ", 1);
	// write(1, " ", 1);
	// write(1, " ", 1);
	// write(1, " ", 1);
	// write(1, " ", 1);
	// write(1, " ", 1);
	// write(1, " ", 1);
	// write(1, " ", 1);
	// write(1, char_arg_number[14], 1);
	// write(1, "\n", 1);

	// write(1, char_arg_number[11], 1);
	// write(1, " ", 1);
	// write(1, " ", 1);
	// write(1, " ", 1);
	// write(1, " ", 1);
	// write(1, " ", 1);
	// write(1, " ", 1);
	// write(1, " ", 1);
	// write(1, " ", 1);
	// write(1, " ", 1);
	// write(1, char_arg_number[15], 1);
	// write(1, "\n", 1);

	// write(1, char_arg_number[12], 1);
	// write(1, " ", 1);
	// write(1, " ", 1);
	// write(1, " ", 1);
	// write(1, " ", 1);
	// write(1, " ", 1);
	// write(1, " ", 1);
	// write(1, " ", 1);
	// write(1, " ", 1);
	// write(1, " ", 1);
	// write(1, char_arg_number[16], 1);
	// write(1, "\n", 1);

	// write(1, " ", 1);
	// write(1, " ", 1);
	// write(1, char_arg_number[5], 1);
	// write(1, " ", 1);
	// write(1, char_arg_number[6], 1);
	// write(1, " ", 1);
	// write(1, char_arg_number[7], 1);
	// write(1, " ", 1);
	// write(1, char_arg_number[8], 1);
	// write(1, " ", 1);
	// write(1, "\n", 1);
}
