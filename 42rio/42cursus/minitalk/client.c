/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 21:59:41 by ruchoa            #+#    #+#             */
/*   Updated: 2022/08/19 18:30:39 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	encrypt(int pid, char c)
{
	int i;

	i = 8;
	while (i--)
	{
		if (c & (1 << i))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(DELAY);
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
		encrypt(pid, *argv[2]++);
	return (0);
}

/*
argc  ->		 1			 2					 3
*argv ->		[0]			[1]					[2]
 argv ->	012345678901			 01234567890123456789012345
			./client.out	54321	"Put your sample text here."
*/
