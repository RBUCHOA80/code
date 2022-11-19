/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:01:07 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/15 14:57:10 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/* #include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	max;
	int	min;
	int	i;

	max = -20;
	min = -30;
	i = 0;
	while (i < (max - min))
	{
		printf("mat[%i] = %i\n", i, ft_range(min, max)[i]);
		i++;
	}
	return (0);
} */

int	*ft_range(int min, int max)
{
	int	*mat;
	int	i;

	if (min >= max)
		return (0);
	else
	{
		mat = (int *)malloc(sizeof(mat) * (max - min));
		if (!mat)
			return (0);
		i = 0;
		while (i < (max - min))
		{
			mat[i] = (i + min);
			i++;
		}
		return (mat);
	}
}
