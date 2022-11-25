/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneves <gneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:28:26 by gneves            #+#    #+#             */
/*   Updated: 2022/03/28 18:28:26 by gneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp_a;
	int	tmp_b;

	tmp_a = *a;
	tmp_b = *b;
	*a = (tmp_a / tmp_b);
	*b = (tmp_a % tmp_b);
}

/*
#include <stdio.h>
int main()
{
	int a = 5;
	int b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("%d %d", a, b);
	return 0;
}
*/
