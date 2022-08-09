/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icantelm <icantelm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 03:03:35 by icantelm          #+#    #+#             */
/*   Updated: 2022/02/18 18:18:31 by icantelm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (*str != '\0')
	{
		str++;
		n++;
	}
	return (n);
}

// #include<stdio.h>
// int main(void)
// {
// 	char c[] = "testeee";
// 	printf("%d\n", ft_strlen(c));
// 	return (0);
// }