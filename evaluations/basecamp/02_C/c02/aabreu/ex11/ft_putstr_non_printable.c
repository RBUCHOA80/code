/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:33:53 by coder             #+#    #+#             */
/*   Updated: 2022/02/07 17:07:40 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int		ft_char_is_printable(char c);
void	ft_putchar(char c);
void	ft_print_char_hex(char c);

void	ft_putstr_non_printable(char *str)
{
	while (*str != 0)
	{
		if (ft_char_is_printable(*str))
		{
			ft_putchar(*str);
		}
		else
		{
			ft_print_char_hex(*str);
		}
		str++;
	}
}

void	ft_print_char_hex(char c)
{
	char	to_print[3];
	int		c_int;
	int		j[2];

	c_int = c;
	if (c < 0)
	{
		c_int += 256;
	}
	to_print[0] = 92;
	j[0] = c_int / 16;
	j[1] = c_int % 16;
	if (j[0] < 10)
		to_print[1] = j[0] + 48;
	else
		to_print[1] = j[0] + 87;
	if (j[1] < 10)
		to_print[2] = j[1] + 48;
	else
		to_print[2] = j[1] + 87;
	write(1, to_print, 3);
}

int	ft_char_is_printable(char c)
{
	if (c < 32 || c == 127)
	{
		return (0);
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
