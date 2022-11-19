/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 20:24:23 by ruchoa            #+#    #+#             */
/*   Updated: 2022/06/11 23:20:36 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	nbr[(11)];
	int		i;

	i = 0;
	if (n == 0)
	{
		nbr[(11 - 1) - 1 - i] = '0';
		i++;
	}
	if (n < 0)
		ft_putstr_fd("-", fd);
	while (n < 0)
	{
		nbr[(11 - 1) - 1 - i] = '0' - (n % 10);
		n = (n / 10);
		i++;
	}
	while (n > 0)
	{
		nbr[(11 - 1) - 1 - i] = '0' + (n % 10);
		n = (n / 10);
		i++;
	}
	nbr[(11 - 1)] = '\0';
	ft_putstr_fd(&nbr[(11 - 1) - i], fd);
}

/* int	g_nbr[] = {-2147483648, -1234567890, -10, -1, \
				0, 1, 10, 15, 1234567890, 2147483647};

int	g_fd[] = {0, 1, 2};

int	main(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < (int)(sizeof(g_fd) / sizeof(g_fd[0])))
	{
		j = 0;
		while (j < (int)(sizeof(g_nbr) / sizeof(g_nbr[0])))
		{
			ft_putnbr_fd(g_nbr[j], g_fd[i]);
			ft_putstr_fd("\n", g_fd[i]);
			j++;
		}
		ft_putstr_fd("--------------\n", g_fd[i]);
		i++;
	}
	return (0);
} */
