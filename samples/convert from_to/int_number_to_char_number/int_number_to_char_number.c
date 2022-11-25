/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_number_to_char_number.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 20:33:28 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/12 20:33:28 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	int_number_to_char_number(int int_number);

int	main(void)
{
	int_number_to_char_number(31);
	return (0);
}

void	int_number_to_char_number(int int_number)
{
	char	char_number;

	char_number = (int_number / 10) + 48;
	write(1, &char_number, 1);
	char_number = (int_number % 10) + 48;
	write(1, &char_number, 1);
}
