/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 23:20:01 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/18 23:23:45 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	printf("R = %i\n", ft_recursive_power(0, 3));
	printf("R = %i\n", ft_recursive_power(2, 0));
	printf("R = %i\n", ft_recursive_power(2, 3));
} */

int	ft_recursive_power(int nb, int power)
{
	if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (1);
}
