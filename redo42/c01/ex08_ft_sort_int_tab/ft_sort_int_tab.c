/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 21:54:35 by ruchoa            #+#    #+#             */
/*   Updated: 2022/03/16 22:26:46 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[10];
	int	size;
	int	i;

	tab[0] = 234;
	tab[1] = 523;
	tab[2] = 134;
	tab[3] = 6;
	tab[4] = 658;
	tab[5] = 4356;
	tab[6] = 123;
	tab[7] = 75;
	tab[8] = 6789;
	tab[9] = 2;
	size = (sizeof(tab) / sizeof(tab[0]));
	ft_sort_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}
	return (0);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int	temp;
	int	i;

	count = size;
	while (count != 0)
	{
		i = 1;
		while (i < size)
		{
			if (tab[i - 1] > tab[i])
			{
				temp = tab[i];
				tab[i] = tab[i - 1];
				tab[i - 1] = temp;
			}
			i++;
		}
		count--;
	}
}
