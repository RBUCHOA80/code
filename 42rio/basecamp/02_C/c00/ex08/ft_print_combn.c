/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:33:54 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/15 18:18:12 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* void	ft_printint(int n);

void	ft_print_combn(int n);

int	main(void)
{
	int	n;

	n = 9;
	if (0 < n && n < 10)
		ft_print_combn(n);
	return (0);
} */

void	ft_printint(int n)
{
	n = n + 48;
	write(1, &n, 1);
}

void	ft_print_combn(int n)
{
	int	i;
	int	nbr;

	nbr = 0;
	while (nbr <= n)
	{
		i = 0;
		while (i < n)
		{
			ft_printint(i);
			i++;
			if (i == n)
				ft_printint(i);
		}
		write(1, ", ", 2);
		nbr++;
	}
}
