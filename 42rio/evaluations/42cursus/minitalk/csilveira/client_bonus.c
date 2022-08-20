/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilveir <csilveir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 03:59:09 by csilveir          #+#    #+#             */
/*   Updated: 2022/08/18 05:42:29 by csilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "libft/ft_printf.h"
#include <signal.h>

void	send(unsigned char sig_bit, pid_t pid)
{
	int	bit;

	bit = 0;
	while (bit <= 7)
	{
		if (sig_bit & 0b10000000)
		{
			if (kill(pid, SIGUSR1) == -1)
				exit(EXIT_FAILURE);
		}
		else
		{
			if (kill(pid, SIGUSR2) == -1)
				exit(EXIT_FAILURE);
		}
		sig_bit = sig_bit << 1;
		bit++;
		usleep(200);
	}
}

void	running(pid_t pid, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		send(str[i], pid);
		i++;
	}
	send('\0', pid);
}

void	confirm_received(int sig)
{
	if (sig == SIGUSR1)
		ft_printf("STRING RECEIVED!\n");
}

int	main(int argc, char **argv)
{
	int					pid;
	struct sigaction	sa;

	sa.sa_handler = confirm_received;
	sigaction(SIGUSR1, &sa, NULL);
	if (argc == 3)
	{	
		pid = ft_atoi(argv[1]);
		running(pid, argv[2]);
	}
	else
	{
		ft_printf("wrong parameter numbers\n");
		ft_printf("Ex:./client <PID_SERVER> <STRING>\n");
		exit(EXIT_FAILURE);
	}
	return (0);
}
