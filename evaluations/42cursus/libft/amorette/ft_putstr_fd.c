/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorette <amorette@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 13:06:40 by amorette          #+#    #+#             */
/*   Updated: 2022/06/16 10:20:02 by amorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
	{
		write (fd, "(null)", 6);
		return ;
	}
	write (fd, s, ft_strlen(s));
}

/* int main(void)
{
    ft_putstr_fd("", 1);
    return (0);
} */

/* #include <stdio.h>
# include <fcntl.h>
int main(void)
{
 //int	ft_display_file2(char *file_name)
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
	ft_putstr_fd(s, fd);
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
* gcc -Wall -Wextra -Werror ft_putstr_fd.c ft_strlen.c && ./a.out */
