/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilveir <csilveir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 04:03:52 by csilveir          #+#    #+#             */
/*   Updated: 2022/08/18 05:43:50 by csilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "libft/ft_printf.h"
#include <signal.h>

static int	power_2(int power)
{
	int	i;
	int	ret;
	int	base;

	ret = 1;
	i = 0;
	base = 2;
	if (power == 0)
		return (1);
	else
	{
		while (i < power)
		{
			ret = ret * base;
			i++;
		}
	}
	return (ret);
}

static void	received_bit(int sig, siginfo_t *info, void *ucontext)
{
	static unsigned char	sig_bits;
	static int				bit;

	(void)ucontext;
	if (sig == SIGUSR1)
		sig_bits = sig_bits + power_2(7 - bit);
	bit++;
	if (bit == 8)
	{
		write(1, &sig_bits, sizeof(char));
		if (sig_bits == '\0')
			kill(info->si_pid, SIGUSR1);
		bit = 0;
		sig_bits = 0;
	}
}

int	main(void)
{
	pid_t				pid;
	struct sigaction	sa;

	sa.sa_sigaction = &received_bit;
	pid = getpid();
	ft_printf("PID: %d\n", pid);
	while (1)
	{
		sigaction(SIGUSR1, &sa, NULL);
		sigaction(SIGUSR2, &sa, NULL);
		pause();
	}
	return (0);
}
