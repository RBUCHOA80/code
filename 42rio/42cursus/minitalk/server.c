/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 22:01:11 by ruchoa            #+#    #+#             */
/*   Updated: 2022/08/19 00:29:06 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(void)
{
	int i;

	printf("--- server ---\n");
	printf("\e[0;35mPID: %i\e[m\n", getpid());
	i = 0;
	while(1)
	{
		sigaction(SIGUSR2, NULL, NULL);
		printf("(A)%i\n", i);
		i++;
	}
	return (0);
}
