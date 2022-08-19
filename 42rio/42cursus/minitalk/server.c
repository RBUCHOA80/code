/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 22:01:11 by ruchoa            #+#    #+#             */
/*   Updated: 2022/08/19 18:17:37 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	decrypt(int sig)
{
	if (sig == SIGUSR2)
		write(1, "0", 1);
	else
		write(1, "1", 1);
}

int	main(void)
{
	struct sigaction	s_sigaction;
	char				*str;

	s_sigaction.sa_handler = decrypt;
	write(FD, "PID: ", 4);
	ft_putnbr_fd(getpid(), FD);
	write(FD, "\n", 1);
	sigaction(SIGUSR2, &s_sigaction, NULL);
	sigaction(SIGUSR1, &s_sigaction, NULL);
	while (1)
		pause();
	return (0);
}
