/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsergio <vsergio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 09:51:22 by vsergio           #+#    #+#             */
/*   Updated: 2022/04/07 09:51:22 by vsergio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	numbers;

	numbers = 0;
	while (str[numbers] != '\0')
	numbers++;
	return (numbers);
}

// #include <stdio.h>
//  int main(void)
//  {
//  	int counter = ft_strlen("cinco");
// 	printf("O tamanho da string eh %i \n", counter);
// }