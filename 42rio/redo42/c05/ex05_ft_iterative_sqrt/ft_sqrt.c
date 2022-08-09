/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 00:48:20 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/08 18:59:28 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int	nb;

	nb = 2147483648;
	printf("%d\n", ft_sqrt(nb));
	return (0);
}

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while ((i * i) != nb)
	{
		if ((unsigned int)(i * i) > (unsigned int)nb)
			return (0);
		i++;
	}
	return (i);
}
