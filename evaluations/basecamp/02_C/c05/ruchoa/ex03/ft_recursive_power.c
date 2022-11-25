/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 21:10:29 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/09 00:52:47 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	int	nb;
	int	power;

	nb = 4;
	power = 0;
	printf("%i^%i\t= %i\n", nb, power, ft_recursive_power(nb, power));
	nb = -4;
	power = 2;
	printf("%i^%i\t= %i\n", nb, power, ft_recursive_power(nb, power));
	nb = 4;
	power = -20;
	printf("%i^%i\t= %i\n", nb, power, ft_recursive_power(nb, power));
	nb = -3;
	power = -5;
	printf("%i^%i\t= %i\n", nb, power, ft_recursive_power(nb, power));
	nb = 0;
	power = 0;
	printf("%i^%i\t= %i\n", nb, power, ft_recursive_power(nb, power));
	return (0);
} */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
