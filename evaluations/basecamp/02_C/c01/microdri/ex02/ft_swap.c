/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri  <microdri@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:40:09 by microdri          #+#    #+#             */
/*   Updated: 2022/03/28 17:59:36 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	change;

	change = *a;
	*a = *b;
	*b = change;
}

/* #include <stdio.h>

int main(void)
{
	int test1 = 10;
	int test2 = 5;

	int *a = &test1;
	int *b = &test2;

	ft_swap(a, b);
	printf("%d\n", *a);
	printf("%d\n", *b);
} */