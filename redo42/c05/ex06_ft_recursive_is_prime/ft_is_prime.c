/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 17:25:28 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/08 19:05:18 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);

int	maind(void)
{
	int	nb;

	nb = 2;
	printf("%i", ft_is_prime(nb));
	return (0);
}

int	ft_is_prime(int nb)
{
	if (nb < 2)
		return (0);
	if (nb)
		return (0);
	else
		return (ft_is_prime(nb));
}
