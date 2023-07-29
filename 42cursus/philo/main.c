/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:21:04 by ruchoa            #+#    #+#             */
/*   Updated: 2023/07/29 15:19:14 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

struct s_exec
{
	pthread_t	*pthread;
	int			pthread_i;
};

void	*ft_routine(void *pthread)
{
	struct s_exec	laranja;
	static int	pthread_i;
	int			rand;

	laranja.pthread = pthread;
	laranja.pthread_i = pthread_i++;
	rand = 3;
	printf("pthread[%i] ", laranja.pthread_i);
	printf("%p ", &laranja.pthread);
	printf("Starting...\n\n");
	sleep(rand);
	printf("pthread[%i] ", laranja.pthread_i);
	printf("%p ", &laranja.pthread);
	printf("...Waiting...\n\n");
	sleep(rand);
	printf("pthread[%i] ", laranja.pthread_i);
	printf("%p ", &laranja.pthread);
	printf("...Ended!\n\n");
}

int	main(void)
{
	pthread_t	thread1;
	pthread_t	thread2;

	pthread_create(&thread1, NULL, &ft_routine, NULL);
	pthread_create(&thread2, NULL, &ft_routine, NULL);
	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);
	return (0);
}
