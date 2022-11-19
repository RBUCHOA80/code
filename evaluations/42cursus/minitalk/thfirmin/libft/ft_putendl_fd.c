/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 20:10:02 by ruchoa            #+#    #+#             */
/*   Updated: 2022/06/11 23:20:40 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/* int	g_fd[] = {0, 1, 2};

int	main(void)
{
	char	*s;
	int		i;

	s = "Put your text here.";
	i = 0;
	while (i < (int)(sizeof(g_fd) / sizeof(g_fd[0])))
		ft_putendl_fd(s, g_fd[i++]);
	return (0);
} */
