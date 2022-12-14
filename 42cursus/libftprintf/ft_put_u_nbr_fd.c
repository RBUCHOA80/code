/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u_nbr_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:32:33 by ruchoa            #+#    #+#             */
/*   Updated: 2022/11/15 18:35:25 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_put_u_nbr_fd(unsigned int n, int fd)
{
	if (n < 10)
	{
		n = (n + '0');
		write(fd, &n, 1);
		return ;
	}
	else
		ft_put_u_nbr_fd((n / 10), fd);
	n = ((n % 10) + '0');
	write(fd, &n, 1);
}
