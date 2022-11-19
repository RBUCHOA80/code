/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 21:58:39 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/09 00:53:08 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	int	index;

	index = -2;
	printf("%i --> %i\n", index, ft_fibonacci(index));
	index = -1;
	printf("%i --> %i\n", index, ft_fibonacci(index));
	index = 0;
	printf("%i --> %i\n", index, ft_fibonacci(index));
	index = 1;
	printf("%i --> %i\n", index, ft_fibonacci(index));
	index = 8;
	printf("%i --> %i\n", index, ft_fibonacci(index));
	index = 20;
	printf("%i --> %i\n", index, ft_fibonacci(index));
	return (0);
} */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
