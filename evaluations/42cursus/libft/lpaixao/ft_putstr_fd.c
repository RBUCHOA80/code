/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 19:11:25 by ruchoa            #+#    #+#             */
/*   Updated: 2022/11/21 22:34:13 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
		ft_putchar_fd(s[i++], fd);
}

/* int	g_fd[] = {0, 1, 2};

int	main(void)
{
	char	*s;
	int		i;

	s = "Put your text here.\n";
	i = 0;
	while (i < (int)(sizeof(g_fd) / sizeof(g_fd[0])))
	{
		ft_putstr_fd(s, g_fd[i]);
		i++;
	}
	return (0);
} */
