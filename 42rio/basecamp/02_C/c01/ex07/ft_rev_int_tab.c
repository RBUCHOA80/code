/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:36:28 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/14 15:36:28 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	size;
	int	tab[10];
	int	n;

	size = 10;
	tab[0] = '0';
	tab[1] = '1';
	tab[2] = '2';
	tab[3] = '3';
	tab[4] = '4';
	tab[5] = '5';
	tab[6] = '6';
	tab[7] = '7';
	tab[8] = '8';
	tab[9] = '9';
	ft_rev_int_tab(tab, size);
	n = 0;
	while (n < size)
	{
		write(1, &tab[n], 1);
		write(1, "\n", 1);
		n++;
	}
	return (0);
} */

void	ft_rev_int_tab(int *tab, int size)
{
	int	n;
	int	temp;

	n = 0;
	while (n < ((size) / 2))
	{
		temp = tab[n];
		tab[n] = tab[(size - 1) - n];
		tab[(size - 1) - n] = temp;
		n++;
	}
}
