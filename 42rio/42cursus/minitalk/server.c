/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 22:01:11 by ruchoa            #+#    #+#             */
/*   Updated: 2022/08/19 19:38:47 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	decrypt(int sig)
{
	static char	chr;
	static int	bit;

	if (sig == SIGUSR1) //bit 1
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
	struct sigaction	s_sigaction;
	char				*str;

	s_sigaction.sa_handler = decrypt;
	ft_putstr_fd("\e[0;35mPID: ", FD);
	ft_putnbr_fd(getpid(), FD);
	ft_putstr_fd("\e[m\n", FD);
	sigaction(SIGUSR2, &s_sigaction, NULL);
	sigaction(SIGUSR1, &s_sigaction, NULL);
	while (1)
		pause();
	return (0);
}
