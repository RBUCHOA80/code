/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 18:18:41 by thfirmin          #+#    #+#             */
/*   Updated: 2022/08/27 15:29:14 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_message(char c, int pid_nb);

int	main(int argc, char *argv[])
{
	pid_t	pid_nb;

	if (argc != 3)
	{
		printf("Invalid argumments\n");
		return (1);
	}
	pid_nb = ft_atoi(argv[1]);
	while (*argv[2])
	{
		send_message(*(argv[2]++), pid_nb);
		write (1, "\n", 1);
	}
	return (0);
}

void	send_message(char c, int pid_nb)
{
	int	count;

	count = 0;
	printf ("%c (%d) = ", c, c);
	while(count++ < 8)
	{
		if (c & 0x80) //10000000
		{
			write (1, "1", 1);
			kill(pid_nb, SIGUSR2); //1
		}
		else
		{
			write (1, "0", 1);
			kill(pid_nb, SIGUSR1); //0
		}
		c <<= 1;
		usleep(100);
	}
	write (1, "\n", 1);
	printf("pid: %d\n", pid_nb);
}


