/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasouza <rasouza@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 22:56:56 by rasouza           #+#    #+#             */
/*   Updated: 2022/03/30 04:06:50 by rasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	temp = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[(size - 1) - i];
		tab[(size - 1) - i] = temp;
		i++;
	}
}

// #include<stdio.h>
// int main(void)
// {
//     int matriz[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
//     int size = 0;
//     ft_rev_int_tab(matriz,9); 
//     while(size < 9)
//     {
//         printf("%d  \n",matriz[size]);
//         size++;
//     }
//     return(0);
// }