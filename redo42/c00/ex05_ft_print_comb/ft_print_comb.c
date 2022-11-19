/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 18:52:01 by ruchoa            #+#    #+#             */
/*   Updated: 2022/03/05 19:04:01 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	nbr_1;
	int	nbr_2;
	int	nbr_3;

	nbr_1 = '0';
	while (nbr_1 <= '9')
	{
		nbr_2 = nbr_1 + 1;
		while (nbr_2 <= '9')
		{
			nbr_3 = nbr_2 + 1;
			while (nbr_3 <= '9')
			{
				if (nbr_3 > '2')
					write(1, ", ", 2);
				write(1, &nbr_1, 1);
				write(1, &nbr_2, 1);
				write(1, &nbr_3, 1);
				nbr_3++;
			}
			nbr_2++;
		}
		nbr_1++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
