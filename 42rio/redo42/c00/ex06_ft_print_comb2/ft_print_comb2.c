/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 19:15:37 by ruchoa            #+#    #+#             */
/*   Updated: 2022/03/05 19:26:35 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	nbr_1;
	int	nbr_2;
	int	pt_nb;

	nbr_1 = 0;
	while (nbr_1 <= 99)
	{
		nbr_2 = nbr_1 + 1;
		while (nbr_2 <= 99)
		{
			if (nbr_2 > 1)
				write(1, ", ", 2);
			pt_nb = (nbr_1 / 10) + 48;
			write(1, &pt_nb, 1);
			pt_nb = (nbr_1 % 10) + 48;
			write(1, &pt_nb, 1);
			write(1, " ", 1);
			pt_nb = (nbr_2 / 10) + 48;
			write(1, &pt_nb, 1);
			pt_nb = (nbr_2 % 10) + 48;
			write(1, &pt_nb, 1);
			nbr_2++;
		}
		nbr_1++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
