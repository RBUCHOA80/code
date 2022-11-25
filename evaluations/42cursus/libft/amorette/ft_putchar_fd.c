/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorette <amorette@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 12:40:50 by amorette          #+#    #+#             */
/*   Updated: 2022/06/16 10:17:03 by amorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, sizeof(char));
}

/* int main(void)
{
    ft_putchar_fd('c', 2);
}*/

/*#include <stdio.h>
# include <fcntl.h>
int main(void)
{
 int	ft_display_file2(char *file_name);
	int		fd;
	char	buffer[20000];
	int		ifread;
	char	c = 'H';

	fd = open("test.txt", O_RDWR);
	if (fd == -1)
	{
		printf("Cannot read file.\n");
		return (3);
	}
	ifread = read(fd, buffer, 20000);
	while (ifread > 0)
	{
		printf("%s", buffer);
		ifread = read(fd, buffer, 20000);
	}
	if (ifread == -1)
	{
		printf("Cannot read file.\n");
		return (3);
	}
	ft_putchar_fd(c, fd);
	close(fd);
	printf("\nc = %c\n", c);
	fd = open("test.txt", O_RDWR);
	if (fd == -1)
	{
		printf("Cannot read file.\n");
		return (3);
	}
	ifread = read(fd, buffer, 20000);
	while (ifread > 0)
	{
		printf("%s", buffer);
		ifread = read(fd, buffer, 20000);
	}
	if (ifread == -1)
	{
		printf("Cannot read file.\n");
		return (3);
	}
	close(fd);
	printf("\n");
	return (0);
} */
/*crie e arquivo test.txt:
* gcc -Wall -Wextra -Werror ft_putchar_fd.c && ./a.out */
