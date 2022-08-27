/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 19:44:26 by egomes-j          #+#    #+#             */
/*   Updated: 2022/08/27 14:30:11 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
  
static void ft_server_treatment(int num, siginfo_t *info, void *context)
{
	static int bit = 8;
	static unsigned char c;

	bit--;
	if(num == SIGUSR2) // bit 1
		c = c + (128 >> bit);
	if(bit == 0)
	{
		write(1, &c, 1);		
		bit = 8;
		c = 0;	
	}
}

int main (void)
{	
	struct sigaction name;

	name.sa_sigaction = &ft_server_treatment; //bônus		
	ft_putstr_fd("getpid -> ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putstr_fd("\n", 1);
	while (1)
{
		sigaction(SIGUSR2, &name, NULL); // bit 1
		sigaction(SIGUSR1, &name, NULL); // bit 0
		pause();
		}
	return (0);
}
