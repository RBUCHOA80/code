/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fribeiro <fribeiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 23:59:59 by fribeiro          #+#    #+#             */
/*   Updated: 2022/02/19 00:15:33 by fribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index);

int	ft_fibonacci(int index)
{
	int	result;

	if (index == 0)
		result = 0;
	else if (index == 1)
		result = 1;
	else if (index < 0)
		result = -1;
	else
	{
		result = ft_fibonacci(index - 1);
		result += ft_fibonacci(index - 2);
	}
	return (result);
}


#include <stdio.h>
int main (void)
{
	int index;

	index = 20;
	while(index >= -1)
	{
		printf("number=%d, fibonacci=%d\n", index, ft_fibonacci(index));
		index--;
	}
	return (0);
}

