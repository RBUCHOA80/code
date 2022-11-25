/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fribeiro <fribeiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 23:59:59 by fribeiro          #+#    #+#             */
/*   Updated: 2022/02/19 00:15:33 by fribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	index;
	int	result;

	if (nb < 0)
		return (0);
	index = nb + 1;
	result = 1;
	while (--index)
		result *= index;
	return (result);
}


#include <stdio.h>
int main (void)
{
	int index;

	index = 12;
	while(index >= -1)
	{
		printf("number=%d, factorial=%d\n", index, ft_iterative_factorial(index));
		index--;
	}
	return (0);
}

