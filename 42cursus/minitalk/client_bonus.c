/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 21:59:41 by ruchoa            #+#    #+#             */
/*   Updated: 2022/11/21 22:49:21 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./minitalk_bonus.h"

void	ft_response(int sig)
{
	(void)sig;
	ft_putstr_fd("\e[1;35mMessage received.\n", FD);
	return ;
}

void	ft_encrypt(int pid, char chr)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if (chr & (1 << bit))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(750);
		bit++;
	}
}

int	main(int argc, char **argv)
{
	int		pid;

	if (argc != 3)
	{
		ft_putstr_fd("\e[1;31mSINTAX ERROR!\n", FD);
		return (1);
	}
	signal(SIGUSR1, &ft_response);
	pid = ft_atoi(argv[1]);
	while (*argv[2])
		ft_encrypt(pid, *argv[2]++);
	ft_encrypt(pid, *argv[2]);
	return (0);
}
