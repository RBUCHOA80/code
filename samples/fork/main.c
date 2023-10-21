#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

void main(int ac, char **av)
{
	int	child;
	int pid;

	child = fork();
	pid = getpid();
	if (child)
	{
		pid = getpid();
		printf("parent\t");
		printf("pid=%i\t", pid);
		printf("child=%i\t", child);
		printf("ppid=%i\n", getppid());
		wait(5);
	}
	else
	{
		printf("child\t");
		printf("pid=%i\t", pid);
		printf("child=%i\t\t", child);
		printf("ppid=%i\n", getppid());
	}
}
