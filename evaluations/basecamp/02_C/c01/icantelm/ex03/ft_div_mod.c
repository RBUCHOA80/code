/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icantelm <icantelm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 03:03:35 by icantelm          #+#    #+#             */
/*   Updated: 2022/02/18 17:57:13 by icantelm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include<stdio.h>
// int main(void)
// {
// 	int a = 4;
// 	int b = 2;
// 	int div;
// 	int mod;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("%d\n", div);
// 	printf("%d\n", mod);
// 	return (0);
// }