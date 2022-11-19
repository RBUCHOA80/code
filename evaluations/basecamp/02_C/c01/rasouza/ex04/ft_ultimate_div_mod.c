/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasouza <rasouza@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 21:02:33 by rasouza           #+#    #+#             */
/*   Updated: 2022/03/30 04:13:20 by rasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = 0;
	if (*b > 0)
	{
		c = *a;
		*a = *a / *b;
		*b = c % *b;
	}
}

// #include<stdio.h>
// int main (void)
// {
// 	int a = 20;
// 	int b = 10;
// 	ft_ultimate_div_mod(&a,&b);
// 	printf("Div = %d  Mod = %d \n",a,b);
// 	return(0);
// }
