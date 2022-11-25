/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorette <amorette@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 13:39:47 by amorette          #+#    #+#             */
/*   Updated: 2022/06/16 10:19:18 by amorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	if (n >= 0)
		ft_putchar_fd((n % 10) + '0', fd);
}

/*#include <stdio.h>
  int main(void)
{
    ft_putnbr_fd(-2147483648, 2);
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
	int     s = -2147483648;

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
	ft_putnbr_fd(s, fd);
	close(fd);
	printf("\ns = %d\n", s);
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
/* gcc -Wall -Wextra -Werror ft_putnbr_fd.c
 ft_putstr_fd.c ft_putchar_fd.c ft_strlen.c && ./a.out */
