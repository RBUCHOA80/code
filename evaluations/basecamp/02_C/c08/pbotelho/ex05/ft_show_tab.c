/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:52:06 by pbotelho          #+#    #+#             */
/*   Updated: 2022/04/20 03:04:58 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex04/ft_stock_str.h"

#include <unistd.h>
#include <stdio.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * (-1);
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}

int	ft_strlen_this(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (par[size].size)
		size++;
	while (i < size)
	{
		write (1, par[i].str, ft_strlen_this(par[i].str));
		write (1, "\n", 1);
		ft_putnbr(ft_strlen_this(par[i].str));
		write (1, "\n", 1);
		printf("%lli\n", par[i].copy);
		printf("%p\n", par[i].copy);
		write (1, "\n", 1);
		write (1, par[i].copy, ft_strlen_this(par[i].copy));
		write (1, "\n", 1);
		i++;
	}
}

#include <stdio.h>
int	main(void)
{
	int size = 9;
	char	*av[] = {"bojgopdsjshoiptdshptora",
	 "tetnjykiosnhoitjhoistar", "1", "bgoeeagaça", 
"maifgkjfgdskldgkss", "umfleresa", 
"porragdwlççglfskglorkgokrogda", "delgler", "v"};
	ft_show_tab(ft_strs_to_tab(size, av));
}