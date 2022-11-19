/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneves <gneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:18:04 by gneves            #+#    #+#             */
/*   Updated: 2022/03/28 18:18:04 by gneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*
#include <stdio.h>
int main()
{
	int a = 1;
	int b = 2;
	int *pa = &a;
	int *pb = &b;
	ft_swap(pa, pb);
	printf("%d %d", a, b);
	return 0;
}
*/
