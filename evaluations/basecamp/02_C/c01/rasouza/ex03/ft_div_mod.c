/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasouza <rasouza@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:55:16 by rasouza           #+#    #+#             */
/*   Updated: 2022/03/30 04:12:22 by rasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b > 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

// #include<stdio.h>
// int main(void)
// {
// 	int n1 = 20;
// 	int n2 = 10;
// 	int *p1 = &n1;
// 	int *p2 = &n2;

// 	ft_div_mod(n1,n2,p1,p2);
// 	printf("Div = %d  Resto = %d \n",n1,n2);
// 	return(0);
// }