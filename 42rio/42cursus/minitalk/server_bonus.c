/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 22:01:11 by ruchoa            #+#    #+#             */
/*   Updated: 2022/11/08 21:41:48 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#define STDOUT_FILENO 1

#include <signal.h>
#include "../libft/libft.h"

void	ft_decrypt(int sig)
{
	static char	chr;
	static int	bit;

	if (sig == SIGUSR1)
		chr = (chr | (1 << bit));
	bit++;
	if (bit == 8)
	{
		ft_putchar_fd(chr, STDOUT_FILENO);
		chr = 0;
		bit = 0;
	}
}

int	main(void)
{
	struct sigaction	s_sigaction;

	s_sigaction.sa_sigaction = ft_decrypt;
	sigaction(SIGUSR1, &s_sigaction, NULL);
	sigaction(SIGUSR2, &s_sigaction, NULL);
	ft_putstr_fd("\e[1;35mPID: ", STDOUT_FILENO);
	ft_putnbr_fd(getpid(), STDOUT_FILENO);
	ft_putstr_fd("\e[m\n", STDOUT_FILENO);
	while (1)
		pause();
	return (0);
}

//int	main(void)
//{
//	struct sigaction	s_sigaction;

	sigemptyset(&s_sigaction.sa_mask);
//	s_sigaction.sa_sigaction = server_handler;
	s_sigaction.sa_flags = SA_SIGINFO | SA_RESTART;
	configure_sigaction_signals(&s_sigaction);
//	ft_putstr_fd("\e[92mserver [PID = ", STDOUT_FILENO);
//	ft_putnbr_fd(getpid(), STDOUT_FILENO);
//	ft_putstr_fd("]\n\e[0m", STDOUT_FILENO);
//	while (1)
//	{
//		pause();
//	}
//	return (EXIT_SUCCESS);
//}