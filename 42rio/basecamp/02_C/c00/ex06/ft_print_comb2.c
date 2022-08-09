/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 21:10:08 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/14 21:10:08 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* void	ft_print_comb2(void);

int	main(void)
{
	ft_print_comb2();
	return (0);
} */

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	nbr;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (b > 1)
				write(1, ", ", 2);
			nbr = (a / 10) + 48;
			write(1, &nbr, 1);
			nbr = (a % 10) + 48;
			write(1, &nbr, 1);
			write(1, " ", 1);
			nbr = (b / 10) + 48;
			write(1, &nbr, 1);
			nbr = (b % 10) + 48;
			write(1, &nbr, 1);
			b++;
		}
		a++;
	}
}
