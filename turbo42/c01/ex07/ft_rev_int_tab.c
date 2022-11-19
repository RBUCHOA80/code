/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 22:37:36 by ruchoa            #+#    #+#             */
/*   Updated: 2022/03/28 23:14:28 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> //printf

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[10];
	int	size;

	size = 10;
	tab[0] = 35;
	tab[1] = 43;
	tab[2] = 54;
	tab[3] = 97;
	tab[4] = 96;
	tab[5] = 34;
	tab[6] = 38;
	tab[7] = 98;
	tab[8] = 62;
	tab[9] = 17;
	ft_rev_int_tab(tab, size);
	size = 0;
	while (size < 10)
	{
		printf("tab[%i] = %i\n", size, tab[size]);
		size++;
	}
	return (0);
} */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
