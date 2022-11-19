/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneves <gneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:37:12 by gneves            #+#    #+#             */
/*   Updated: 2022/03/28 18:37:12 by gneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp_i;
	int	tmp;

	i = 0;
	temp_i = size - 1;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[temp_i];
		tab[temp_i] = tmp;
		i++;
		temp_i--;
	}
}

/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *tab;
	int size;
	int i = 0;

	size = 20;
	tab = malloc(sizeof(int) * size);
	while (i < size)
		tab[i++] = i;
	ft_rev_int_tab(tab, size);
	printf("%d - %d", tab[19], size);

	return (0);
}
*/
