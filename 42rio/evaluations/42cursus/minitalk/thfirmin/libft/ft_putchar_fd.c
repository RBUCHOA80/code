/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 18:22:13 by ruchoa            #+#    #+#             */
/*   Updated: 2022/06/11 23:24:50 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* char	g_chr[] = {'A', 'B', 'C', '1', '2', '3', 'a', 'b', 'c', '\n'};
int		g_fd[] = {0, 1, 2};

int	main(void)
{
	int		i;
	int		j;

	i = 0;
	while (i < (int)(sizeof(g_fd) / sizeof(g_fd[0])))
	{
		j = 0;
		while (g_chr[j])
		{
			ft_putchar_fd(g_chr[j], g_fd[i]);
			j++;
		}
		i++;
	}
	return (0);
} */
