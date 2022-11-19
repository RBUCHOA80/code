/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri  <microdri@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 23:24:19 by microdri          #+#    #+#             */
/*   Updated: 2022/03/28 17:59:43 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (*b > 0)
	{
		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
	}
}

/* #include <stdio.h>

int main()
{
	int c = 12;
	int d = 9;  
	int *a = &c;
	int *b = &d;

	printf("valor %d dividir por\n", c);
	printf("%d  is\n", d);

	ft_ultimate_div_mod(a, b);
	printf("resultado da divisao %d\n", *a);
	printf("resultado do resto da divisao %d\n", *b);
} */