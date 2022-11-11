/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 22:01:11 by ruchoa            #+#    #+#             */
/*   Updated: 2022/11/11 20:39:28 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include "../libft/libft.h"

#define FD 1

void	ft_decrypt(int sig)
{
	static char	chr;
	static int	bit;

	if (sig == SIGUSR1)
		chr = (chr | (1 << bit));
	bit++;
	if (bit == 8)
	{
		ft_putchar_fd(chr, FD);
		chr = 0;
		bit = 0;
	}
}

int	main(void)
{
	signal(SIGUSR1, &ft_decrypt);
	signal(SIGUSR2, &ft_decrypt);
	ft_putstr_fd("\e[1;35mPID: ", FD);
	ft_putnbr_fd(getpid(), FD);
	ft_putstr_fd("\e[m\n", FD);
	while (1)
		pause();
	return (0);
}
