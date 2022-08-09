/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 21:56:15 by ruchoa            #+#    #+#             */
/*   Updated: 2022/03/28 23:15:08 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> //printf

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 11;
	b = 42;
	printf("a = %i | b = %i <- antes\n", a, b);
	ft_swap(&a, &b);
	printf("a = %i | b = %i <- depois\n", a, b);
	return (0);
} */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
