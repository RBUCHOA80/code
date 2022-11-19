/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri  <microdri@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:50:44 by microdri          #+#    #+#             */
/*   Updated: 2022/03/28 22:09:04 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	f;
	int	aux;

	i = 0;
	f = size -1;
	while (i < (size / 2))
	{
		aux = tab[i];
		tab[i] = tab[f];
		tab[f] = aux;
		i++;
		f--;
	}
}

// #include <stdio.h>

// int	main(void){
// 		int i = 0;
// 		int vet[] = {1,2,3,4,5};

// 		while(i < 5)
// 		{
// 			printf("%d ", vet[i++]);

// 		}
// 		printf("\n");

// 		ft_rev_int_tab(vet, 5);
// 		i = 0;
// 		while(i < 5)
// 		{
// 			printf("%d ", vet[i++]);
// 		}
// 		printf("\n");
// 	}