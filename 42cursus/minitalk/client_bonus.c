/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 21:59:41 by ruchoa            #+#    #+#             */
/*   Updated: 2022/11/23 22:15:07 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./minitalk_bonus.h"

void	ft_response(int sig)
{
	static int	bytes_received;

	if (sig == SIGUSR1)
		bytes_received++;
	if (sig == SIGUSR2)
	{
		ft_putstr_fd("\e[0;32mReceived: ", FD);
		ft_putnbr_fd(bytes_received, FD);
		ft_putstr_fd(" Byte(s).\n\e[0m", FD);
		bytes_received = 0;
	}
	return ;
}

void	ft_char2signal(int pid, char chr)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if (chr & (1 << bit))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(DELAY);
		bit++;
	}
}

int	main(int argc, char **argv)
{
	int	bytes_sent;
	int	pid;

	if (argc != 3)
	{
		ft_putstr_fd("\e[1;31mSINTAX ERROR!\n", FD);
		return (1);
	}
	bytes_sent = ft_strlen(argv[2]);
	ft_putstr_fd("\e[0;32mSent    : ", FD);
	ft_putnbr_fd(bytes_sent, FD);
	ft_putstr_fd(" Byte(s).\n\e[0m", FD);
	signal(SIGUSR1, &ft_response);
	signal(SIGUSR2, &ft_response);
	pid = ft_atoi(argv[1]);
	while (*argv[2])
		ft_char2signal(pid, *argv[2]++);
	ft_char2signal(pid, *argv[2]);
	return (0);
}
