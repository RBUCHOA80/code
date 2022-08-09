/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 20:46:48 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/14 20:46:16 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>

void	ft_print_numbers(void);

int	main(void)
{
	ft_print_numbers();
	return (0);
} */

void	ft_print_numbers(void)
{
	int	numbers;

	numbers = 48;
	while (numbers < 58)
	{
		write(1, &numbers, 1);
		numbers++;
	}
}
