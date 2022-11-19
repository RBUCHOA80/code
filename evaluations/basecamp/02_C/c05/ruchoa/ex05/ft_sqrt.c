/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 22:37:29 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/09 01:10:59 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int ft_sqrt(int nb);

int	main(void)
{
	int	nb;

	nb = 144;
	printf("sqrt(%i) = %i\n", nb, ft_sqrt(nb));
	nb = 25;
	printf("sqrt(%i) = %i\n", nb, ft_sqrt(nb));
	nb = 400;
	printf("sqrt(%i) = %i\n", nb, ft_sqrt(nb));
	nb = 9;
	printf("sqrt(%i) = %i\n", nb, ft_sqrt(nb));
	nb = 16;
	printf("sqrt(%i) = %i\n", nb, ft_sqrt(nb));
	nb = 80;
	printf("sqrt(%i) = %i\n", nb, ft_sqrt(nb));
	nb = 0;
	printf("sqrt(%i) = %i\n", nb, ft_sqrt(nb));
	nb = -1;
	printf("sqrt(%i) = %i\n", nb, ft_sqrt(nb));
	nb = 1;
	printf("sqrt(%i) = %i\n", nb, ft_sqrt(nb));
	nb = -4;
	printf("sqrt(%i) = %i\n", nb, ft_sqrt(nb));
	return (0);
} */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while ((i * i) < nb && i <= (nb / 2))
		i++;
	if ((i * i) == nb)
		return (i);
	else
		return (0);
}
