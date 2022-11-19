/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 22:04:46 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/14 14:07:21 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_malloc(void)
{
	int	***row;

	row = (int***)malloc(4*sizeof(int**));
	row[0] = (int**)malloc(6*sizeof(int*));
	row[1] = (int**)malloc(6*sizeof(int*));
	row[2] = (int**)malloc(6*sizeof(int*));
	row[3] = (int**)malloc(6*sizeof(int*));
	return (0);
}

int	matrix_0(void)
{
	int	matrix_0;
	
	matrix_0[0][0] = ('1', '2', '3', '4');
	matrix_0[0][1] = ('1', '2', '4', '3');
	matrix_0[0][2] = ('1', '3', '2', '4');
	matrix_0[0][3] = ('1', '3', '4', '2');
	matrix_0[0][4] = ('1', '4', '2', '3');
	matrix_0[0][5] = ('1', '4', '3', '2');
	printf("matrix_0[0]=%c\n", matrix_0[0][0]);
	return (0);
}

int	matrix_1(void)
{
	int	matrix_1[10][10];

	matrix_1[1][0] = ('2', '1', '3', '4');
	matrix_1[1][1] = ('2', '1', '4', '3');
	matrix_1[1][2] = ('2', '3', '1', '4');
	matrix_1[1][3] = ('2', '3', '4', '1');
	matrix_1[1][4] = ('2', '4', '1', '3');
	matrix_1[1][5] = ('2', '4', '3', '1');
	printf("matrix_1[1]=%c\n", matrix_1[1][1]);
	return (0);
}

int	matrix_2(void)
{
	int	matrix_2[10][10];

	matrix_2[2][0] = ('3', '1', '2', '4');
	matrix_2[2][1] = ('3', '1', '4', '2');
	matrix_2[2][2] = ('3', '2', '1', '4');
	matrix_2[2][3] = ('3', '2', '4', '1');
	matrix_2[2][4] = ('3', '4', '1', '2');
	matrix_2[2][5] = ('3', '4', '2', '1');
	printf("matrix_2[2]=%c\n", matrix_2[2][1]);
	return (0);
}

int	matrix_3(void)
{
	int	matrix_3[10][10];

	matrix_3[3][0] = ('4', '1', '2', '4');
	matrix_3[3][1] = ('4', '1', '3', '2');
	matrix_3[3][2] = ('4', '2', '1', '3');
	matrix_3[3][3] = ('4', '2', '3', '1');
	matrix_3[3][4] = ('4', '3', '1', '2');
	matrix_3[3][5] = ('4', '3', '2', '1');
	printf("matrix_3[3]=%c\n", matrix_3[3][3]);
	return (0);
}
