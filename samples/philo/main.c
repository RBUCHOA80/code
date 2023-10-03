#include <pthread.h>
#include <stdio.h>

int	count = 0;
pthread_mutex_t mutex;

void *routine(void *ptr)
{
	int i = 0;
	(void)ptr;
	while (i++ < 1000000)
	{
		pthread_mutex_lock(&mutex);
		count++;
		pthread_mutex_unlock(&mutex);
	}
	return(NULL);
}

void main()
{
	pthread_t t1, t2, t3;

	pthread_mutex_init(&mutex, NULL);

	pthread_create(&t1, NULL, &routine, NULL);
	pthread_create(&t2, NULL, &routine, NULL);
	pthread_create(&t3, NULL, &routine, NULL);

	pthread_join(t1, NULL);
	pthread_join(t2, NULL);
	pthread_join(t3, NULL);

	pthread_mutex_destroy(&mutex);

	printf("count=%i\n", count);
}
