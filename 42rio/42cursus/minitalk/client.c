/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 21:59:41 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/18 17:53:59 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h" //libft
#include <signal.h> //SIGUSR1 | SIGUSR2

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

	pid = ft_atoi(argv[1]);
	if (argc != 3)
	{
		ft_putstr_fd("\e[1;31mSINTAX ERROR!\e[0m\n", 1);
		return (1);
	}
	while (*argv[2])
		ft_encrypt(pid, *argv[2]++);
	return (0);
}
