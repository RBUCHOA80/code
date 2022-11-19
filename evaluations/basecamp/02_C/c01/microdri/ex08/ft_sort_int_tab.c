/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri  <microdri@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:00:17 by microdri          #+#    #+#             */
/*   Updated: 2022/03/28 22:09:05 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	final_size;
	int	aux;
	int	j;

	final_size = size - 1;
	j = 0;
	while (j < final_size)
	{
		i = 0;
		while (i < final_size)
		{
			if (tab[i] > tab[i +1])
			{
				aux = tab[i];
				tab[i] = tab[i +1];
				tab[i +1] = aux;
			}
			i++;
		}
		j++;
	}
}

/* #include <stdio.h>

int	main(void){
	int vet[] = {5,4,-2,8,9,2,3,6,7};

		int i = 0;
		while(i < 9)
		{
			printf("%d ", vet[i++]);

		}
		printf("\n");

		ft_sort_int_tab(vet, 9);
		i = 0;
		while(i < 9)
		{
			printf("%d ", vet[i++]);
		}
		printf("\n");
} */