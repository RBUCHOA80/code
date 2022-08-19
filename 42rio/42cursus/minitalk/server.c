/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 22:01:11 by ruchoa            #+#    #+#             */
/*   Updated: 2022/08/19 15:58:18 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	decrypt(int sig)
{
	if (sig == SIGUSR2)
		printf("0");
	else
		printf("1");
}

int	main(void)
{
	signal(SIGUSR1, decrypt);
	signal(SIGUSR2, decrypt);
	printf("--- server ---\n");
	printf("\e[0;35mPID: %i\e[m\n", getpid());
	while (1)
	{
		pause();
		printf("\n");
	}
	return (0);
}
