/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioda-si <dioda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:19:09 by dioda-si          #+#    #+#             */
/*   Updated: 2022/06/15 17:52:50 by dioda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	aux;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		aux = n * (-1);
	}
	else
		aux = n;
	if (aux > 9)
		ft_putnbr_fd(aux / 10, fd);
	aux = aux % 10 + 48;
	ft_putchar_fd(aux, fd);
}
