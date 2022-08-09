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

int	main(int argc_int_number, char *argv_char_number[])
{
	int	i;
	int	len;

	if (argc_int_number != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	else
	{
		i = 0;
		len = 0;
		while (argv_char_number[1][len] != '\0')
			len++;
		while (i < len)
		{
			write(1, &argv_char_number[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
