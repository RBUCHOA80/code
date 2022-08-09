/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fribeiro <fribeiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 23:59:59 by fribeiro          #+#    #+#             */
/*   Updated: 2022/02/19 00:15:33 by fribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	prime_search(int low, int high);

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb);

int	prime_search(int low, int high)
{
	int	result;
	int	index;

	index = low;
	result = 0;
	while (index <= high && result == 0)
	{
		if (ft_is_prime(index))
			result = index;
		index++;
	}
	return (result);
}

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

int	ft_find_next_prime(int nb)
{
	int	result;
	int	high;
	int	low;

	low = nb;
	high = 2 * nb;
	if (nb <= 2)
		result = 2;
	else if (ft_is_prime(nb))
		result = nb;
	else
		result = prime_search(low, high);
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
		result = ft_find_next_prime(index);
		printf("number=%d, nearest_prime=%d\n", index, result);
		index--;
	}
	return (0);
}

