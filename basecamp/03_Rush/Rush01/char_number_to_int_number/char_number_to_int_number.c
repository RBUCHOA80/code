/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_number_to_int_number.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:18:27 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/12 15:18:27 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	char_number_to_int_number(char char_number);

int	main(void)
{
	char	char_number;

	char_number = 4;
	write(1, "Antes da função = ", 20);
	write(1, &char_number, 1);
	write(1, "\n", 1);
	char_number_to_int_number(char_number); //chamada da função
	write(1, " = Depois da função", 21);
	write(1, "\n", 1);
}

void	char_number_to_int_number(char char_number)
{
	int	int_number;

	int_number = char_number + 48;
	write(1, &int_number, 1);
}
