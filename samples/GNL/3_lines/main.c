#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

char *gnl(int fd)
{
  char *s = malloc(10000), *c = s;
  while (read(fd, c, 1) > 0 && *c++ != '\n')
    return c > s ? (*c = '\0', s) : (free(s), NULL);
}

int	main(void)
{
	char *str;
	int	fd;
	int	i;

	fd = open("./file.txt", O_RDONLY);
	i = 1;
	while (i <= 9)
	{
		str = gnl(fd);
		printf("%p | ", str);
		printf("str_line[%d] -> %s\n", i++, str);
	}
	close(fd);
	return (0);
}
