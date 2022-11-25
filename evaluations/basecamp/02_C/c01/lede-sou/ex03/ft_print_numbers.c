/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 01:24:11 by lede-sou          #+#    #+#             */
/*   Updated: 2022/02/10 16:35:30 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

//int	main(void)
//{
//	ft_print_numbers();
//	return (0);
//}

void	ft_print_numbers(void)
{
	int	number;

	number = '1';
	while (number <= '9')
	{
		write(1, &number, 1);
		number++;
	}
}
