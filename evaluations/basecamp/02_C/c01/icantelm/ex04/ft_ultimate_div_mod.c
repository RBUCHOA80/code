/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icantelm <icantelm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 03:03:35 by icantelm          #+#    #+#             */
/*   Updated: 2022/02/18 18:04:42 by icantelm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// #include<stdio.h>
// int main(void)
// {
// 	int a = 15;
// 	int b = 3;
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("%d\n", a);
// 	printf("%d\n", b);
// 	return (0);
// }