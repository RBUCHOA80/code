/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:14:56 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/18 23:22:32 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	int a = ft_iterative_power(3, 2);
	printf("R = %i\n", a);
} */

int	ft_iterative_power(int nb, int power)
{
	int	nbr;

	nbr = nb;
	if (!power)
		return (1);
	else if (power < 0)
		return (0);
	while (--power > 0)
		nb *= nbr;
	return (nb);
}
