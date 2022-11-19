/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri  <microdri@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 06:12:48 by microdri          #+#    #+#             */
/*   Updated: 2022/04/09 06:12:48 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
		result *= nb--;
	return (result);
}

#include <stdio.h>

int	main()
{
	printf("%d\n",ft_iterative_factorial(-1));
	printf("%d\n",ft_iterative_factorial(0));
	printf("%d\n",ft_iterative_factorial(1));
	printf("%d\n",ft_iterative_factorial(2));
	printf("%d\n",ft_iterative_factorial(5));
	printf("%d\n",ft_iterative_factorial(12));
	printf("%d\n",ft_iterative_factorial(13));
}