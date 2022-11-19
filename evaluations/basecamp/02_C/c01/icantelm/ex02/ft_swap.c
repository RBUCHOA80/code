/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icantelm <icantelm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 03:03:35 by icantelm          #+#    #+#             */
/*   Updated: 2022/02/18 17:46:34 by icantelm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// #include<stdio.h>
// int main(void)
// {
// 	int a = 4;
// 	int b = 2;
// 	ft_swap(&a, &b);
// 	printf("%d\n", a);	
// 	printf("%d\n", b);	
// 	return (0);
// }