/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimachad <fimachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 19:37:45 by fimachad          #+#    #+#             */
/*   Updated: 2022/06/11 09:40:26 by fimachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	nbr;

	nbr = n;
	if (n < 0)
	{
		n = (n + 1) * (-1);
		ft_putchar_fd('-', fd);
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	if (!(nbr < 0))
		ft_putchar_fd((n % 10) + 48, fd);
	else
		ft_putchar_fd((n % 10) + 49, fd);
}

/* int	g_nbr[] = {\
				-2147483648, \
				-1234567890, \
				-200, \
				-1, \
				0, \
				1, \
				10, \
				15, \
				1234567890, \
				2147483647, \
			};

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
