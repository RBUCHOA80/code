/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 22:01:11 by ruchoa            #+#    #+#             */
/*   Updated: 2022/10/10 20:05:39 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		ft_putchar_fd(chr, 1);
		chr = 0;
		bit = 0;
	}
}

int	main(void)
{
	struct sigaction	s_sigaction;

	s_sigaction.sa_handler = ft_decrypt;
	sigaction(SIGUSR2, &s_sigaction, NULL);
	sigaction(SIGUSR1, &s_sigaction, NULL);
	ft_putstr_fd("\e[1;35mPID: ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putstr_fd("\e[m\n", 1);
	while (1)
		pause();
	return (0);
}
