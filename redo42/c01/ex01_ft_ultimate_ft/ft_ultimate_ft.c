/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 15:24:25 by ruchoa            #+#    #+#             */
/*   Updated: 2022/03/07 21:43:36 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	g_nbr;
int	*g_nbr_1;
int	**g_nbr_2;
int	***g_nbr_3;
int	****g_nbr_4;
int	*****g_nbr_5;
int	******g_nbr_6;
int	*******g_nbr_7;
int	********g_nbr_8;

int	main(void)
{
	g_nbr = 0;
	g_nbr_1 = &g_nbr;
	g_nbr_2 = &g_nbr_1;
	g_nbr_3 = &g_nbr_2;
	g_nbr_4 = &g_nbr_3;
	g_nbr_5 = &g_nbr_4;
	g_nbr_6 = &g_nbr_5;
	g_nbr_7 = &g_nbr_6;
	g_nbr_8 = &g_nbr_7;
	printf("Before -> nbr =  %i\n", g_nbr);
	ft_ultimate_ft(&g_nbr_8);
	printf("After  -> nbr = %i\n", g_nbr);
	return (0);
}

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
