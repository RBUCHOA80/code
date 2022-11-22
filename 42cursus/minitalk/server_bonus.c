/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 22:01:11 by ruchoa            #+#    #+#             */
/*   Updated: 2022/11/21 22:47:54 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./minitalk_bonus.h"

void	ft_decrypt(int sig, siginfo_t *s_sigaction, void *context)
{
	static char	chr;
	static int	bit;

	(void)context;
	if (sig == SIGUSR1)
		chr = (chr | (1 << bit));
	bit++;
	if (bit == 8)
	{
		if (chr == 0)
		{
			kill(s_sigaction->si_pid, SIGUSR1);
			ft_putstr_fd("\0", FD);
			chr = 0;
			bit = 0;
		}
		else
		{
			ft_putchar_fd(chr, FD);
			chr = 0;
			bit = 0;
		}		
	}
}

//sigemptyset(&s_sigaction.sa_mask);

int	main(void)
{
	struct sigaction	s_sigaction;

	s_sigaction.sa_sigaction = &ft_decrypt;
	s_sigaction.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &s_sigaction, NULL);
	sigaction(SIGUSR2, &s_sigaction, NULL);
	ft_putstr_fd("\e[1;35mPID: ", FD);
	ft_putnbr_fd(getpid(), FD);
	ft_putstr_fd("\e[0m\n", FD);
	while (1)
		pause();
	return (0);
}
