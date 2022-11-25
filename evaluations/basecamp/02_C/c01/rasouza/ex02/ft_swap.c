/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasouza <rasouza@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 02:05:01 by rasouza           #+#    #+#             */
/*   Updated: 2022/03/30 04:11:18 by rasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

// #include<stdio.h>
// int main(void)
// {
// 	int a = 10;
// 	int b = 20;

// 	printf(" a = %d b = %d \n",a,b);
// 	ft_swap(&a,&b);
// 	printf(" a = %d b = %d \n",a,b);
// 	return(0);
// }