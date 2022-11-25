/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 09:43:28 by mreis-me          #+#    #+#             */
/*   Updated: 2022/05/22 19:32:30 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_is_zero(int nb, int fd)
{
	if (nb == 0)
	{
		ft_putchar_fd(nb + 48, fd);
		return ;
	}
}

void	ft_putnbr_fd(int nb, int fd)
{
	char			arr[15];
	unsigned int	temp;
	int				digit;
	int				size;

	size = 0;
	temp = nb;
	if (nb < 0)
	{
		temp *= -1;
		ft_putchar_fd('-', fd);
	}
	ft_is_zero(nb, fd);
	while (temp > 0)
	{
		digit = temp % 10;
		arr[size++] = digit + 48;
		temp /= 10;
	}
	size--;
	while (size >= 0)
	{
		ft_putchar_fd(arr[size], fd);
		size--;
	}
}
