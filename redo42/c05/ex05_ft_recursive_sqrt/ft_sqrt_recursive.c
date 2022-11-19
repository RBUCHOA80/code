/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt_recursive.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 20:52:10 by ruchoa            #+#    #+#             */
/*   Updated: 2022/03/16 20:57:29 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_sqrt(int nb);

int	g_error = 1;
int	g_a = 1;
int	g_b = 1;

int	main(void)
{
	int	nb;

	nb = 2147483647;
	printf("%d\n", ft_sqrt(nb));
	return (0);
}

int	ft_sqrt(int nb)
{
	g_a = (g_a + g_b) / 2;
	g_b = nb / g_a;
	if (abs((g_b * g_b) - nb) < g_error)
		return (g_b);
	else
		return (ft_sqrt(nb));
}
