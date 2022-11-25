/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneves <gneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 23:57:26 by gneves            #+#    #+#             */
/*   Updated: 2022/02/12 23:57:26 by gneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscrapper.h"

void	ft_initialize_params(char *argv, t_params *p)
{
	int		i;
	int		row;
	int		col;
	int		num;

	ft_alloc_mem(p);
	row = 0;
	col = 0;
	i = 0;
	while (argv[i] != '\0' && row < 4)
	{
		num = ft_atoi(&argv[i]);
		p->matrix[row][col] = num;
		col++;
		while (ft_is_space(argv[i]))
			i++;
		while (ft_is_nb(argv[i]))
			i++;
		if (col == p->size)
		{
			row++;
			col = 0;
		}
		i++;
	}
}

int	check_size(t_params *p, char *argv)
{
	if (ft_nbrlen(argv) % 4 == 0)
	{
		p->size = (ft_nbrlen(argv) / 4);
		if (p->size > 9)
			return (0);
		return (1);
	}
	return (0);
}

int	check_args(char *argv)
{
	int	i;
	int	l;

	l = 0;
	i = 0;
	while (argv[i] != '\0')
	{
		if (ft_is_nb(argv[i]))
			l++;
		if (!ft_is_nb(argv[i]) && !ft_is_space(argv[i]))
			return (0);
		i++;
	}
	if (l == 0)
		return (0);
	return (1);
}

int	check_params(t_params *p)
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (row < 4)
	{
		col = 0;
		while (col < p->size)
		{
			if (p->matrix[row][col] < 1 || p->matrix[row][col] > p->size)
				return (0);
			col++;
		}
		row++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_params	p;
	t_board		b;

	// if (argc != 2 || !check_args(argv[1]))
	// 	return (ft_log_error());
	// if (!check_size(&p, argv[1]))
	// 	return (ft_log_error());
	ft_initialize_params(argv[1], &p);
	// if (!check_params(&p))
	// 	return (ft_log_error());
	// ft_skyscrapper_init(&b, p.size);
	// if (!skyscraper_solver(&b, &p))
	// 	return (ft_log_error());
	// ft_skyscrapper_print(&b);
	// ft_clean_mem(&p, &b);
	return (0);
}
