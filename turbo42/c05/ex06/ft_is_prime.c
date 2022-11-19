/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 23:04:28 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/09 01:02:46 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int	nb;

	nb = 2;
	printf("%i --> %i\n", nb, ft_is_prime(nb));
	nb = 81;
	printf("%i --> %i\n", nb, ft_is_prime(nb));
	nb = 81;
	printf("%i --> %i\n", nb, ft_is_prime(nb));
	nb = -4;
	printf("%i --> %i\n", nb, ft_is_prime(nb));
	nb = -23;
	printf("%i --> %i\n", nb, ft_is_prime(nb));
	return (0);
} */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= (nb / 2))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
