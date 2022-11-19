/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <rodrigo.uchoa@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:58:37 by marolive          #+#    #+#             */
/*   Updated: 2022/02/05 21:57:19 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void	rush(int x, int y)
{
	if(x !=0 && y != 0)
{
	int	i;
	int	j;
	j = 0;
	
	int	corner_1;
	int	corner_2;
	int	corner_3;
	int	corner_4;
	int	lin;
	int	col;
	corner_1 = 'A';
	corner_2 = 'C';
	corner_3 = 'A';
	corner_4 = 'C';
	lin = 'B';
	col = 'B';
	if(x < 0)
		x = -x;
	if(y < 0)
		y = -y;
	//Primeira linha (SEMPRE)
	i = 1;
	if(i == 1)
		ft_putchar(corner_1);
	while(i < (x-1))
	{
		ft_putchar(lin);
		i++;
	}
	if(i == (x-1))
		ft_putchar(corner_2);
	ft_putchar('\n');
		
	//Linhas do meio
	while(j + 2< y)
	{
		i = 1;
		if(i == 1)
			ft_putchar(col);
		while(i < (x-1))
		{
			ft_putchar(' ');
			i++;
		}
		if(i == (x-1))
			ft_putchar(col);
		ft_putchar('\n');
		j++;
	}

	//Última linha (SEMPRE)
	i = 1;
	if(i < y)
	{
		ft_putchar(corner_3);
		while(i < (x-1))
		{
			ft_putchar(lin);
		i++;
		}
		if(i == (x-1))
		ft_putchar(corner_4);
		ft_putchar('\n');
	}
}
}
