/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fribeiro <fribeiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 23:59:59 by fribeiro          #+#    #+#             */
/*   Updated: 2022/02/19 00:15:33 by fribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	int	result;
	int	index;

	if (nb == 2 || nb == 3)
		result = 1;
	else if (nb <= 1)
		result = 0;
	else if (nb % 2 == 0 || nb % 3 == 0)
		result = 0;
	else
	{
		result = 1;
		index = 5;
		while (index * index <= nb && result)
		{
			result = (nb % index != 0);
			result &= (nb % (index + 2) != 0);
			index += 6;
		}
	}
	return (result);
}


#include <stdio.h>
int main (void)
{
	int index;
	int result;

	index = 1000;
	while(index >= -1)
	{
		result = ft_is_prime(index);
		if (result)
			printf("number=%d, prime=%d\n", index, result);
		index--;
	}
	return (0);
}

