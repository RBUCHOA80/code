/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciano <luciano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 22:06:57 by llima-da          #+#    #+#             */
/*   Updated: 2022/03/30 14:38:23 by luciano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char str)
{	
	if (str > 31 && str < 127)
	{
		write(1, &str, 1);
	}
	else
	{
		write(1, ".", 1);
	}
}

void	print_hex(char str)
{	
	char	*hex;

	hex = "0123456789abcdef";
	write(1, &hex[str / 16], 1);
	write(1, &hex[str % 16], 1);
}	

void	print_adress(long int addr)
{
	long int	i;
	char		nbr[15];

	i = 0;
	while (addr != 0)
	{
		if ((addr % 16) > 9)
			nbr[(15 - 1) - i] = 87 + (addr % 16);
		else
			nbr[(15 - 1) - i] = 48 + (addr % 16);
		addr = addr / 16;
		i++;
	}
	while (i <= (15 - 1))
	{
		nbr[(15 - 1) - i] = 48;
		i++;
	}
	write(1, &nbr, i);
	write(1, ": ", 2);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	int				j;

	i = 0;
	while (i <= size / 16)
	{
		print_adress ((long int)addr + (i * 16));
		j = 0;
		while (j < 16 && ((i * 16) + j) < size)
		{
			print_hex (((char *)addr)[(i * 16) + j]);
			print_hex (((char *)addr)[(i * 16) + j + 1]);
			write(1, " ", 1);
			j += 2;
		}
		j = -1;
		while (j++ < 16 && ((i * 16) + j) < size)
		{
			ft_putstr_non_printable (((char *)addr)[(i * 16) + j]);
		}
		write(1, "\n", 1);
		i ++;
	}
	return (addr);
}

int	main(void)
{
	char	str[] = "Bonjour les aminches	\n	c  \
	est fou	tout.ce qu on peut faire avec...print_memory....lol.lol. .";
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	ft_print_memory(str, i);
	write(1, "\n", 1);
}
