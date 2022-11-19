/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 04:58:15 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/15 04:58:22 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/* #include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	*range;
	int	min;
	int	max;
	int	i;

	max = 31;
	min = 20;
	i = 0;
	printf("TOTAL = %i\n", ft_ultimate_range(&range, min, max));
	while (i < (max - min))
	{
		printf("mat[%i] = %i\n", i, range[i]);
		i++;
	}
	return (0);
} */

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*mat;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	else
	{
		mat = malloc(sizeof(mat) * (max - min));
		if (!mat)
		{
			*range = 0;
			return (-1);
		}
		i = 0;
		while (i < (max - min))
		{
			mat[i] = (min + i);
			i++;
		}
		*range = mat;
		return (i);
	}
}
