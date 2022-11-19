/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscrapper.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneves <gneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 23:58:32 by gneves            #+#    #+#             */
/*   Updated: 2022/02/12 23:58:32 by gneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SKYSCRAPPER_H
# define SKYSCRAPPER_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_params
{
	int	**matrix;
	int	size;
}	t_params;

typedef struct s_board
{
	int	**grid;
	int	size;
}	t_board;

int		ft_is_nb(char c);
int		ft_log_error(void);
int		ft_atoi(char *str);
int		ft_is_space(char c);
int		ft_nbrlen(char *str);
void	ft_alloc_mem(t_params *p);
int		check_params(t_params *p);
void	ft_skyscrapper_print(t_board *b);
void	ft_clean_mem(t_params *p, t_board *b);
void	ft_skyscrapper_init(t_board	*b, int size);
int		is_safe(t_board *b, int row, int col, int num);
int		is_possible_from_top(t_board *b, int col, int *colup);
int		is_possible_from_bottom(t_board *b, int col, int *coldown);
int		is_possible_from_left(t_board *b, int row, int *rowleft);
int		is_possible_from_right(t_board *b, int row, int *rowright);
int		is_valid_board(t_board *b, t_params *params);
int		is_used_in_column(t_board *b, int col, int num);
int		is_used_in_row(t_board *b, int row, int num);
int		skyscraper_solver(t_board *b, t_params *p);
int		find_unassigned_location(t_board *b, int *row, int *col);

#endif
