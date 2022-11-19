/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 23:47:44 by ruchoa            #+#    #+#             */
/*   Updated: 2022/05/07 21:05:40 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_addr(long int addr);

void	ft_hex(char *addr, int size);

void	ft_str(char *addr, int size);

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;

	if (size == 0)
		return (addr);
	i = 0;
	while (i <= ((size - 1) / 16))
	{
		ft_addr((long int) addr + (i * 16));
		ft_hex((char *)addr + (i * 16), (size - 1) - (i * 16));
		ft_str((char *)addr + (i * 16), (size - 1) - (i * 16));
		write(1, "\n", 1);
		i++;
	}
	return (addr);
}

void	ft_addr(long int addr)
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
	write(1, nbr, i);
	write(1, ": ", 2);
}

void	ft_hex(char *addr, int size)
{
	int	print;
	int	i;

	print = 0;
	i = 0;
	while (i < 16 && i <= size)
	{
		if (i > 0 && i % 2 == 0)
			write(1, " ", 1);
		if (addr[i] / 16 > 9)
			print = (addr[i] / 16) + 87;
		else
			print = (addr[i] / 16) + 48;
		write(1, &print, 1);
		if (addr[i] % 16 > 9)
			print = (addr[i] % 16) + 87;
		else
			print = (addr[i] % 16) + 48;
		write(1, &print, 1);
		i++;
	}
	write(1, " ", 1);
}

void	ft_str(char *addr, int size)
{
	int	print;
	int	i;

	print = 0;
	i = size;
	while (i < (16 - 1))
	{
		write(1, " ", 1);
		i++;
	}
	i = 0;
	while (i < 16 && i <= size)
	{
		if (32 <= addr[i] && addr[i] <= 126)
			print = (addr[i]);
		else
			print = 46;
		write(1, &print, 1);
		i++;
	}
}

int	main(void)
{
	char	*str;
	int		size;

	str = "Bonjour les aminches\t\n\tc  est fou\ttout\tce qu on peut faire \
	avec\t\n\t print_memory\n\n\n\tlol.lol\n \0";
	size = 0;
	while (str[size])
		size++;
	ft_print_memory(str, size);
	return (0);
}
