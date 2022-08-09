/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 18:43:53 by ruchoa            #+#    #+#             */
/*   Updated: 2022/03/06 14:20:27 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
		write(1, "P", 1);
	else
		write(1, "N", 1);
}

int	main(void)
{
	ft_is_negative(2147483647);
	write(1, "\n", 1);
	ft_is_negative(214748364);
	write(1, "\n", 1);
	ft_is_negative(0);
	write(1, "\n", 1);
	ft_is_negative(-214748364);
	write(1, "\n", 1);
	ft_is_negative(-2147483648);
	write(1, "\n", 1);
	return (0);
}
