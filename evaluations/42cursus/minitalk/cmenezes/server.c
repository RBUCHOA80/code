/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 06:53:02 by cmenezes          #+#    #+#             */
/*   Updated: 2022/12/07 23:28:55 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_handler(int param1)
{
	static int	ch;
	static int	shft;

	if (param1 == SIGUSR2)
		ch = ch + (128 >> shft);
	shft++;
	if (shft == 8)
	{
		write(1, &ch, 1);
		shft = ZERO;
		ch = ZERO;
	}
}

int	main(void)
{
	signal(SIGUSR1, &ft_handler);
	signal(SIGUSR2, &ft_handler);
	ft_printf("Pid is: %d \n", getpid());
	while (1)
	{
		pause();
	}
	return (0);
}
