/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 19:34:20 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/09 00:52:28 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> //printf

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int	nb;

	nb = -1;
	printf("%i! = %i\n", nb, ft_recursive_factorial(nb));
	nb = 0;
	printf("%i! = %i\n", nb, ft_recursive_factorial(nb));
	nb = 1;
	printf("%i! = %i\n", nb, ft_recursive_factorial(nb));
	nb = 5;
	printf("%i! = %i\n", nb, ft_recursive_factorial(nb));
	nb = 10;
	printf("%i! = %i\n", nb, ft_recursive_factorial(nb));
	return (0);
} */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
