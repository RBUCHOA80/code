/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 21:59:41 by ruchoa            #+#    #+#             */
/*   Updated: 2022/08/19 00:25:14 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(int argc, char **argv)
{
	int	pid;

	printf("--- client ---\n");
	pid = ft_atoi(argv[1]);
	if (argc != 3)
	{
		printf("\e[1;31mSINTAX ERROR!\n");
		return (0);
	}
	kill(pid, SIGUSR2);
	printf("\e[0;32m%i\t", pid);
	printf("\e[0;32m%s\n", argv[2]);
	return (0);
}

/*
argc  ->		 1			 2					 3
*argv ->		[0]			[1]					[2]
 argv ->	012345678901			 01234567890123456789012345
			./client.out	54321	"Put your sample text here."
*/
