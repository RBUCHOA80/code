/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-sou <leonardojose7101@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 04:18:19 by lede-sou          #+#    #+#             */
/*   Updated: 2022/02/10 03:12:41 by lede-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

int	main(void)
{
	ft_print_comb();
	return (0);
}

void	ft_create_item(int i, int j, int k)
{
	char	comma;
	char	space;

	comma = 44;
	space = 32;
	if (((i != j) && (i != k) && (j != k)) && (i < j && j < k))
	{
		write(1, &i, 1);
		write(1, &j, 1);
		write(1, &k, 1);
		if (!(i == '7' && j == '8' && k == '9'))
		{
			write(1, &comma, 1);
			write(1, &space, 1);
		}
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i <= '7')
	{
		j = '0';
		while (j <= '8')
		{
			k = '0';
			while (k <= '9')
			{					
				ft_create_item(i, j, k);
				k++;
			}			
			j++;
		}	
		i++;
	}
}
