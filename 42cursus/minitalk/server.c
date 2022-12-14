/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 22:01:11 by ruchoa            #+#    #+#             */
/*   Updated: 2022/11/23 20:59:18 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./minitalk.h"

void	ft_signal2char(int sig)
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
	signal(SIGUSR1, &ft_signal2char);
	signal(SIGUSR2, &ft_signal2char);
	ft_putstr_fd("\e[1;35mPID: ", FD);
	ft_putnbr_fd(getpid(), FD);
	ft_putstr_fd("\e[0m\n", FD);
	while (1)
		pause();
	return (0);
}
