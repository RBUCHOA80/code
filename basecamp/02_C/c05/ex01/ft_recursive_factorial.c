/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:32:19 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/18 23:22:52 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	main(void)
{
	int n = 12;
	int a = ft_recursive_factorial(n);
	printf("r = %i\n", a);
} */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb >= 1)
	{
		return (nb * ft_recursive_factorial (nb - 1));
	}
	else
		return (1);
}
