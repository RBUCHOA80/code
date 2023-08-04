/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 21:31:29 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/04 20:34:40 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol_bonus.h"

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else
	{
		while (power != 0)
		{
			result *= nb;
			power--;
		}
		return (result);
	}
}

double	ft_atof(char *argv)
{
	double	nbr;
	int		i;
	int		j;

	if (!ft_strchr(argv, '.'))
		ft_msg();
	i = 0;
	nbr = 0;
	if (argv[i] == '-')
		i++;
	while (ft_isdigit(argv[i]))
		nbr = (nbr * 10) + (argv[i++] - 48.0);
	if (argv[i] == '.')
		i++;
	j = 1;
	while (ft_isdigit(argv[i]) && argv[i])
		nbr = nbr + ((argv[i++] - 48.0) / ft_iterative_power(10, j++));
	if (argv[0] == '-')
		nbr = nbr * -1;
	return (nbr);
}
