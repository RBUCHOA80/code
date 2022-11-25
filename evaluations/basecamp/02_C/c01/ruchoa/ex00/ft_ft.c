/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 21:34:13 by ruchoa            #+#    #+#             */
/*   Updated: 2022/03/28 23:15:19 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> //printf

void	ft_ft(int *nbr);

int	main(void)
{
	int	nbr;

	nbr = 11;
	printf("nbr = %i <- antes\n", nbr);
	ft_ft(&nbr);
	printf("nbr = %i <- depois\n", nbr);
	return (0);
} */

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
