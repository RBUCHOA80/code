/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 20:10:25 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/09 00:52:38 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> //print

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	int	nb;
	int	power;

	nb = 2;
	power = 10;
	printf("%i^%i\t= %i\n", nb, power, ft_iterative_power(nb, power));
	nb = -2;
	power = 10;
	printf("%i^%i\t= %i\n", nb, power, ft_iterative_power(nb, power));
	nb = -2;
	power = 9;
	printf("%i^%i\t= %i\n", nb, power, ft_iterative_power(nb, power));
	nb = 2;
	power = -10;
	printf("%i^%i\t= %i\n", nb, power, ft_iterative_power(nb, power));
	nb = -2;
	power = -10;
	printf("%i^%i\t= %i\n", nb, power, ft_iterative_power(nb, power));
	nb = 2;
	power = 0;
	printf("%i^%i\t= %i\n", nb, power, ft_iterative_power(nb, power));
	nb = 0;
	power = 0;
	printf("%i^%i\t= %i\n", nb, power, ft_iterative_power(nb, power));
	return (0);
} */

int	ft_iterative_power(int nb, int power)
{
	int	ret;

	ret = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power != 0)
	{
		ret = ret * nb;
		power--;
	}
	return (ret);
}
