/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 23:54:34 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/09 00:56:50 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	int	nb;

	nb = -7;
	printf("%i --> %i\n", nb, ft_find_next_prime(nb));
	nb = 0;
	printf("%i --> %i\n", nb, ft_find_next_prime(nb));
	nb = 2;
	printf("%i --> %i\n", nb, ft_find_next_prime(nb));
	nb = 14;
	printf("%i --> %i\n", nb, ft_find_next_prime(nb));
	nb = 23;
	printf("%i --> %i\n", nb, ft_find_next_prime(nb));
	nb = 20;
	printf("%i --> %i\n", nb, ft_find_next_prime(nb));
	nb = 16;
	printf("%i --> %i\n", nb, ft_find_next_prime(nb));
	nb = 124357890;
	printf("%i --> %i\n", nb, ft_find_next_prime(nb));
	nb = 2147483630;
	printf("%i --> %i\n", nb, ft_find_next_prime(nb));
	return (0);
} */

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (2);
	i = 2;
	while (i <= (nb / 2))
	{
		if ((nb % i) == 0)
		{
			nb++;
			i = 1;
		}
		i++;
	}
	return (nb);
}
