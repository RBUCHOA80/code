#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

void main(int ac, char **av)
{
	int	child;
	int pid;

	child = fork();
	pid = getpid();
	if (child) //parent
	{
		pid = getpid();
		printf("parent\t");
		printf("pid=%i\t", pid);
		printf("child=%i\t", child);
		printf("ppid=%i", getppid());
		if(av[1])
			printf("\tav=%s", av[1]);
		printf("\n");
		wait(0);
	}
	else //child
	{
		printf("child\t");
		printf("pid=%i\t", pid);
		printf("child=%i\t\t", child);
		printf("ppid=%i", getppid());
		if(av[1])
			printf("\tav=%s", av[1]);
		printf("\n");
	}
}
