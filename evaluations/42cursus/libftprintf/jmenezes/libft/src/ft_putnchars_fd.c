/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchars_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 16:39:06 by jmenezes          #+#    #+#             */
/*   Updated: 2022/08/20 17:37:24 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ssize_t	ft_putnchars_fd(char c, size_t n, int fd)
{
	size_t	cnt;
	size_t	i;

	cnt = 0;
	i = 0;
	while (i < n)
	{
		cnt += ft_putchar_fd(c, fd);
		i++;
	}
	return (cnt);
}
