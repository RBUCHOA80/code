/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneves <gneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:40:51 by gneves            #+#    #+#             */
/*   Updated: 2022/03/29 18:40:51 by gneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	c;

	c = 0;
	while (c < (size - 1))
	{
		if (tab[c] > tab[c + 1])
		{
			tmp = tab[c];
			tab[c] = tab[c + 1];
			tab[c + 1] = tmp;
			c = 0;
		}
		else
			c++;
	}
}

/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int tab[5] = {3, 5, 2, 1, 4};
	int size;
	int i = 0;

	size = 5;
	ft_sort_int_tab(tab, size);
	while (i < size)
		printf("%d ", tab[i++]);

	return (0);
}
*/
