/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:33:39 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/14 16:33:39 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	size;
	int	tab[6];

	tab[0] = 3;
	tab[1] = 63;
	tab[2] = 8;
	tab[3] = 5;
	tab[4] = 98;
	tab[5] = 1;
	size = 0;
	while (size < 6)
	{
		if (size == 0)
			size++;
		if (size > 0)
			size++;
		if (size == 6)
			size++;
	}
	ft_sort_int_tab(tab, size);
} */

void	ft_sort_int_tab(int *tab, int size)
{
	int	n;
	int	min;

	n = 0;
	min = tab[0];
	while (n <= size)
	{
		n = 0;
		while (tab[n])
		{
			if (tab[n] <= min)
				min = tab[n];
			n++;
		}
		n++;
	}	
}
