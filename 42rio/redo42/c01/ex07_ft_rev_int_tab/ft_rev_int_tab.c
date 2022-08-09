/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 19:23:10 by ruchoa            #+#    #+#             */
/*   Updated: 2022/03/07 21:41:52 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[10];
	int	size;
	int	i;

	size = 0;
	while (size < (int)(sizeof(tab) / sizeof(tab[0])))
	{
		tab[size] = size;
		size++;
	}
	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("tab[%i] = %i\n", i, tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i <= ((size - 1) / 2))
	{
		temp = tab[(size - 1) - i];
		tab[(size - 1) - i] = tab[i];
		tab[i] = temp;
		i++;
	}
}
