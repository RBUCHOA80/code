/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 21:59:41 by ruchoa            #+#    #+#             */
/*   Updated: 2022/08/21 23:09:47 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_encrypt(int pid, char chr)
{
	int bit;

	bit = 0;
	while (bit < 8)
	{
		if (chr & (1 << bit))
			kill(pid, SIGUSR1); //bit 1
		else
			kill(pid, SIGUSR2); //bit 0
		usleep(DELAY);
		bit++;
	}
}

int	main(int argc, char **argv)
{
	char	*str;
	int		pid;
	int 	i;

	pid = ft_atoi(argv[1]);
	if (argc != 3)
	{
		ft_putstr_fd("\e[1;31mSINTAX ERROR!\n", FD);
		return (0);
	}
	while (*argv[2])
		ft_encrypt(pid, *argv[2]++);
	return (0);
}
