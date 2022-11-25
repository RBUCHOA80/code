/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri  <microdri@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 06:42:58 by microdri          #+#    #+#             */
/*   Updated: 2022/04/09 06:43:05 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}

int main(void)
{
	int nb;

	nb = 8;
	printf("%i --> %i\n", nb, ft_find_next_prime(nb));
	nb = 145;
	printf("%i --> %i\n", nb, ft_find_next_prime(nb));
	nb = 2147483630;
	printf("%i --> %i\n", nb, ft_find_next_prime(nb));
	nb = 11;
	printf("%i --> %i\n", nb, ft_find_next_prime(nb));
	nb = 8;
	printf("%i --> %i\n", nb, ft_find_next_prime(nb));
	nb = 8;
	printf("%i --> %i\n", nb, ft_find_next_prime(nb));
	nb = 8;
	printf("%i --> %i\n", nb, ft_find_next_prime(nb));
	return (0);
}