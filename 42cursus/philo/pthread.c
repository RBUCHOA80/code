/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pthread.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:21:04 by ruchoa            #+#    #+#             */
/*   Updated: 2023/07/30 15:24:27 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

struct s_exec
{
	pthread_t	*tn;
	int			id;
};

void	*ft_routine(void *tn)
{
	struct s_exec	thread;
	static int		id;
	int				rand = 3;

	thread.tn = tn;
	thread.id = id++;
	printf("t[%i] ", thread.id);
	printf("%p ", &thread.tn);
	printf("Starting...\n\n");
	sleep(rand);
	printf("t[%i] ", thread.id);
	printf("%p ", &thread.tn);
	printf("...Waiting...\n\n");
	sleep(rand);
	printf("t[%i] ", thread.id);
	printf("%p ", &thread.tn);
	printf("...Ended!\n\n");
}

int	main(void)
{
	pthread_t	t1;
	pthread_t	t2;

	pthread_create(&t1, NULL, &ft_routine, NULL);
	pthread_create(&t2, NULL, &ft_routine, NULL);
	pthread_join(t1, NULL);
	pthread_join(t2, NULL);
	return (0);
}
