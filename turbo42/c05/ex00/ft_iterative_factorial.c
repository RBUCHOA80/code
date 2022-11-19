/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 19:10:03 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/09 00:52:20 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int	n;

	n = -10;
	printf("%i! = %i\n", n, ft_iterative_factorial(n));
	n = -1;
	printf("%i! = %i\n", n, ft_iterative_factorial(n));
	n = 0;
	printf("%i! = %i\n", n, ft_iterative_factorial(n));
	n = 1;
	printf("%i! = %i\n", n, ft_iterative_factorial(n));
	n = 10;
	printf("%i! = %i\n", n, ft_iterative_factorial(n));
	return (0);
} */

int	ft_iterative_factorial(int nb)
{
	int	ret;

	ret = 1;
	if (nb < 0)
		return (0);
	else
	{
		while (nb != 0)
		{
			ret = ret * nb;
			nb--;
		}
	}
	return (ret);
}
