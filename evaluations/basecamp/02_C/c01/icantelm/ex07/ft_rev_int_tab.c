/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icantelm@student.42.fr <icantelm@student.42.f    +#+  +:+       +#+  */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:52:06 by icantelm@stude       #+#    #+#          */
/*   Updated: 2022/03/28 19:52:09 by icantelm@stude      ###   ########.fr    */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	i;

	i = 0;
	while (i != size / 2)
	{
		aux = tab[i];
		tab[i] = tab[size - (i + 1)];
		tab[size - (i - 1)] = aux;
		i++;
	}
}

// #include<stdio.h>

// int main(void)
// {
// 	printf(ft_rev_int_tab());
// 	return (0);
// }