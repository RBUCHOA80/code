/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 02:17:30 by coder             #+#    #+#             */
/*   Updated: 2022/02/07 14:41:14 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_print_char_hex(unsigned char c);
void	ft_print_content(void *addr, int size);
void	ft_print_address(void *addr);
void	ft_putstr_non_printable(char *str, unsigned int size);
int		ft_char_is_printable(char c);

void	ft_print_memory(void *addr, unsigned int size)
{
	while (size > 15)
	{
		ft_print_address(addr);
		ft_print_content(addr, 16);
		ft_putstr_non_printable((char *)addr, 16);
		write(1, "\n", 1);
		size -= 16;
		addr += 16;
	}
	if (size > 0)
	{
		ft_print_address(addr);
		ft_print_content(addr, size);
		ft_putstr_non_printable((char *)addr, size);
		write(1, "\n", 1);
	}
}

void	ft_print_address(void *addr)
{
	char			to_print[18];
	unsigned long	j;
	int				i;
	int				r;

	j = (unsigned long) addr;
	i = 15;
	while (i >= 0)
	{
		r = j % 16;
		if (r < 10)
		{
			to_print[i] = r + 48;
		}
		else
		{
			to_print[i] = r + 87;
		}
		j = j >> 4;
		i--;
	}
	to_print[16] = ':';
	to_print[17] = ' ';
	write(1, to_print, 18);
}

void	ft_print_content(void *addr, int size)
{
	int				j;
	unsigned char	c;

	j = 0;
	while (j < size)
	{
		c = *(unsigned char *)addr;
		ft_print_char_hex(c);
		addr++;
		if (++j % 2 == 0)
		{
			write(1, " ", 1);
		}
	}
	while (j < 16)
	{
		write(1, " ", 1);
		j++;
	}
}

void	ft_print_char_hex(unsigned char c)
{
	char	to_print[2];
	int		j[2];

	j[0] = c / 16;
	j[1] = c % 16;
	if (j[0] < 10)
	{
		to_print[0] = j[0] + 48;
	}
	else
	{
		to_print[0] = j[0] + 87;
	}
	if (j[1] < 10)
	{
		to_print[1] = j[1] + 48;
	}
	else
	{
		to_print[1] = j[1] + 87;
	}
	write(1, to_print, 2);
}

void	ft_putstr_non_printable(char *str, unsigned int size)
{
	unsigned int	j;

	j = 0;
	while (j < size)
	{
		if (*str < 32 || *str == 127)
		{
			write(1, ".", 1);
		}
		else
		{
			write(1, str, 1);
		}
		str++;
		j++;
	}
}
