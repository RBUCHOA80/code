/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 18:18:38 by thfirmin          #+#    #+#             */
/*   Updated: 2022/08/20 20:50:47 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_handler(int num);

void	ft_server(void);

int	main(void)
{
	ft_server();
	return (0);
}

void	ft_server(void)
{
	struct sigaction sa;

	sa.sa_handler=ft_handler;
	//signal(SIGUSR1, ft_handler);
	sigaction(SIGUSR2, &sa, NULL); //1
	sigaction(SIGUSR1, &sa, NULL); //0
	int n_pid = getpid();
	printf ("\e[38;5;11m Process Started\n");
	printf (" PID: %d\n\e[m", n_pid);
	int i = 0;
	while (1)
		pause();
}

void	ft_handler(int num)
{
	if (num == 30)
		write (1, "0", 1);
	else
		write (1, "1", 1);	
}
