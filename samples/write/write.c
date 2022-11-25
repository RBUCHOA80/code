/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 11:42:50 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/03 20:31:44 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	char	*str;
	
	str = "Sua frase de testes aqui!";
	while (*str)
		write(1, str++, sizeof(str[0]));
	write(1, "\n", 1);
	
	char	c_cod;
	char	c_oct;
	char	c_hex;
	char	c_bin;
	int		i_cod;
	int		i_oct;
	int		i_hex;
	int		i_bin;
	int		bin_casa;

	c_cod = 97;
	c_oct = 0142;
	c_hex = 0x63;
	c_bin = 0b01100100;
	i_cod = 101;
	i_oct = 0146;
	i_hex = 0x67;
	i_bin = 0b01101000;
	bin_casa = 0b01100001011100110110000101100011;
	write(1, "c_cod = ", 8);
	write(1, &c_cod, 1);
	write(1, "\n", 1);
	write(1, "c_oct = ", 8);
	write(1, &c_oct, 1);
	write(1, "\n", 1);
	write(1, "c_hex = ", 8);
	write(1, &c_hex, 1);
	write(1, "\n", 1);
	write(1, "c_bin = ", 8);
	write(1, &c_bin, 1);
	write(1, "\n", 1);
	write(1, "i_cod = ", 8);
	write(1, &i_cod, 1);
	write(1, "\n", 1);
	write(1, "i_oct = ", 8);
	write(1, &i_oct, 1);
	write(1, "\n", 1);
	write(1, "i_hex = ", 8);
	write(1, &i_hex, 1);
	write(1, "\n", 1);
	write(1, "i_bin = ", 8);
	write(1, &i_bin, 1);
	write(1, "\n", 1);
	write(1, "bin_casa = ", 11);
	write(1, &bin_casa, 4);
	write(1, "\n", 1);

	return (0);
}
