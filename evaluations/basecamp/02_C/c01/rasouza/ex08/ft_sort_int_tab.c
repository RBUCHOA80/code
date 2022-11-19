/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasouza <rasouza@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 04:16:37 by rasouza           #+#    #+#             */
/*   Updated: 2022/03/30 04:44:07 by rasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	count;
	int	i;

	temp = 0;
	count = 0;
	i = 0;
	while (count < size)
	{
		i = 0;
		while (i < (size - 1))
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		count++;
	}
}

// #include<stdio.h>
// int main(void)
// {
//     int matriz[9] = {10, 1, 45, 73, 94, 15, 6, 37, 8};
//     int size = 0;
//     ft_sort_int_tab(matriz,9); 
//     while(size < 9)
//     {
//         printf("%d  \n",matriz[size]);
//         size++;
//     }
//     return(0);
// }