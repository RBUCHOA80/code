/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:19:23 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/09 17:19:23 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	nbr;
	int	*nbr2;
	int	**nbr3;
	int	***nbr4;
	int	****nbr5;
	int	*****nbr6;
	int	******nbr7;
	int	*******nbr8;
	int	********nbr9;
	int	d;
	int	u;

	nbr = 0;
	nbr2 = &nbr;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	nbr9 = &nbr8;
	ft_ultimate_ft(&nbr9);
	d = (nbr / 10) + 48;
	u = (nbr % 10) + 48;
	write(1, &d, 1);
	write(1, &u, 1);
	return (0);
} */

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
