/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 19:44:40 by egomes-j          #+#    #+#             */
/*   Updated: 2022/08/27 14:28:14 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
 
void ft_client_treatment(char c, int nbr)
{
	int count;
	
	count = 8;
	while (count--)
	{
		//count--;
		if(c & (128 >> count))
			kill(nbr, SIGUSR2); // bit 1
		else
			kill(nbr, SIGUSR1); // bit 0		
		usleep(750);
	}
}

int main (int argc, char **argv)
{
	int pid;
	int i;
	
	if(argc != 3)
	{
		ft_putstr_fd("\e[1;31munexpected!\e[m\n", 1);
		return (1);
	}
	pid = ft_atoi(argv[1]);

	i = 0;
	while (argv[2][i])
	{
		ft_client_treatment(argv[2][i], pid);
		i++;
	}
	
	return (0);
}
