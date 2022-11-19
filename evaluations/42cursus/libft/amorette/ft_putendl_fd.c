/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorette <amorette@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 13:32:38 by amorette          #+#    #+#             */
/*   Updated: 2022/06/16 10:18:09 by amorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd (s, fd);
	ft_putchar_fd ('\n', fd);
}

/*int main(void)
{
    ft_putendl_fd("Angelo", 1);
    return (0);
}*/

/* #include <stdio.h>
# include <fcntl.h>
int main(void)
{
	int		fd;
	char	buffer[20000];
	int		ifread;
	char	s[200] = "you must code a set of functions";

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
	ft_putendl_fd(s, fd);
	close(fd);
	printf("\ns = %s\n", s);
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
/* criar o text.txt:
* gcc -Wall -Wextra -Werror ft_putendl_fd.c
ft_putstr_fd.c ft_putchar_fd.c ft_strlen.c && ./a.out */
