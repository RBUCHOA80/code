/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:44:51 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/09 20:44:51 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 'A';
	b = 'B';
	write(1, " a=", 3);
	write(1, &a, 1);
	write(1, " b=", 3);
	write(1, &b, 1);
	ft_swap(&a, &b);
	write(1, " a=", 3);
	write(1, &a, 1);
	write(1, " b=", 3);
	write(1, &b, 1);
	return (0);
} */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
