/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <rodrigo.uchoa@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:58:37 by marolive          #+#    #+#             */
/*   Updated: 2022/02/06 16:21:43 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	fill_line(int x, int arg1, int arg2, int arg3)
{
	int	i;

	i = 1;
	ft_putchar(arg1);
	while (i < (x - 1))
	{
		ft_putchar(arg2);
		i++;
	}
	if (i == (x - 1))
		ft_putchar(arg3);
	ft_putchar('\n');
	return (0);
}

void	rush(int x, int y)
{
	int	j;

	j = 2;
	if (x > 0 && y > 0)
	{
		if (j == 2)
			fill_line(x, 'A', 'B', 'C');
		while (j < y)
		{
			fill_line(x, 'B', ' ', 'B');
			j++;
		}
		if (j == y)
			fill_line(x, 'A', 'B', 'C');
	}
}
