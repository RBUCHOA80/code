/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icantelm <icantelm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 03:03:35 by icantelm          #+#    #+#             */
/*   Updated: 2022/02/18 18:10:39 by icantelm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str++, 1);
	}
}

// int main(void)
// {
// 	char c[] = "teste";
// 	ft_putstr(c);
// 	write(1, "\n", 1);
// 	return (0);
// }