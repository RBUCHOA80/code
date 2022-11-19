/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 02:52:01 by lede-sou          #+#    #+#             */
/*   Updated: 2022/02/10 16:27:19 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	separator(int comma, int space);
void	ft_create_cicles(char i, char j, char comma, char space);

int	main(void)
{
	ft_print_comb2();
}

void	ft_print_comb2(void)
{
	char	i;
	char	j;
	char	comma;
	char	space;

	comma = 44;
	space = 32;
	i = '0';
	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			ft_create_cicles(i, j, comma, space);
			j++;
		}
		i++;
	}
}

void	separator(int comma, int space)
{
	write(1, &comma, 1);
	write(1, &space, 1);
}

void	ft_create_cicles(char i, char j, char comma, char space)
{
	char	k;
	char	l;

	k = '0';
	while (k <= '9')
	{
		l = '0';
		while (l <= '9')
		{
			if ((i * 10 + j) < (k * 10 + l))
			{
				write(1, &i, 1);
				write(1, &j, 1);
				write(1, &space, 1);
				write(1, &k, 1);
				write(1, &l, 1);
				if (!(i == '9' && j == '8' && k == '9' && l == '9'))
				{
					separator(comma, space);
				}
			}
			l++;
		}
		k++;
	}
}
