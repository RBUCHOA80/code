/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <coder@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 23:52:25 by ide-frei          #+#    #+#             */
/*   Updated: 2022/04/02 23:52:25 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_spacing(int space)
{
	while (0 < space)
	{
		ft_putchar(' ');
		space--;
	}
}

int	last_base_size(int size)
{
	int	base_size;
	int	step;
	int	i;

	base_size = 5;
	if (size == 1)
		return (base_size);
	i = 2;
	step = 6;
	while (i <= size)
	{
		if (i != 2 && i % 2 == 0)
			step += 2;
		base_size = (base_size + step) + ((i + 2) - 1) * 2;
		i++;
	}
	return (base_size);
}

void	sastantua(int size)
{
	int	row;
	int	level;
	int	asterisk;
	int	star;
	int	space;

	level = 1;
	asterisk = 1;
	space = last_base_size(size) / 2 - 1;
	if (size > 0)
	{
		while (level <= size)
		{
			row = 1;
			while (row <= level + 2)
			{
				ft_spacing(space--);
				ft_putchar('/');
				star = 0;
				while (star++ < asterisk)
				{
					ft_putchar('*');
				}
				ft_putchar('\\');
				ft_putchar('\n');
				row++;
				asterisk += 2;
			}
			level++;
			if (level % 2 == 1)
			{
				asterisk += 3 + level;
				if (level != 1)
				{
					space -= 1;
				}
			}
			else
			{
				asterisk += 4;
			}
			space -= 2;
		}
	}
	else
	{
		return ;
	}
}

// int main (void)
// {
//     sastantua(5);
//     ft_putchar('\n');
//     return(0);
// }