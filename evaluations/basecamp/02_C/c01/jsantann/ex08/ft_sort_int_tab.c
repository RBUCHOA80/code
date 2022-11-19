/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:50:05 by coder             #+#    #+#             */
/*   Updated: 2022/03/28 20:14:23 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	y;
	int	x;

	x = 0;
	while (x < size)
	{
		y = x + 1;
		while (y < size)
		{
			if (tab[x] > tab[y])
			{
				temp = tab[x];
				tab[x] = tab[y];
				tab[y] = temp;
			}
			y++;
		}
		x++;
	}
}
