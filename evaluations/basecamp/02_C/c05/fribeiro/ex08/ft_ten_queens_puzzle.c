/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fribeiro <fribeiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 23:59:59 by fribeiro          #+#    #+#             */
/*   Updated: 2022/02/19 00:15:33 by fribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_ten_queens_puzzle(void);

int		find_puzzle_solutions(int queen_id, int size, int *positions);

int		check_placement(int queen_id, int *positions);

int		is_on_attack(int queen_id, int other_queen_id, int *positions);

void	print_solution(int size, int *positions);

int	ft_ten_queens_puzzle(void)
{
	int	queens_positions[10];
	int	num_solutions;
	int	puzzle_size;

	puzzle_size = 10;
	num_solutions = find_puzzle_solutions(0, puzzle_size, queens_positions);
	return (num_solutions);
}

int	find_puzzle_solutions(int queen_id, int size, int *positions)
{
	int	index;
	int	num_solutions;

	index = 0;
	num_solutions = 0;
	while (index < size)
	{
		positions[queen_id] = index;
		if (check_placement(queen_id, positions))
		{
			if (queen_id == size - 1)
			{
				print_solution(size, positions);
				num_solutions++;
			}
			else if (queen_id < size)
				num_solutions += find_puzzle_solutions(
						queen_id + 1, size, positions
						);
		}
		index++;
	}
	return (num_solutions);
}

int	check_placement(int queen_id, int *positions)
{
	int	result;
	int	index;

	result = 1;
	if (queen_id)
	{
		index = 0;
		while (index < queen_id && result)
		{
			result = 1 - is_on_attack(queen_id, index, positions);
			index++;
		}
	}
	return (result);
}

int	is_on_attack(int queen_id, int other_queen_id, int *positions)
{
	int	hdiff;
	int	vdiff;
	int	result;

	result = 0;
	vdiff = other_queen_id - queen_id;
	hdiff = positions[other_queen_id] - positions[queen_id];
	if (vdiff == 0 || hdiff == 0)
		result = 1;
	else
	{
		if (vdiff < 0)
			vdiff = -vdiff;
		if (hdiff < 0)
			hdiff = -hdiff;
		result = (hdiff == vdiff);
	}
	return (result);
}

void	print_solution(int size, int *positions)
{
	int		index;
	char	digit;

	index = 0;
	while (index < size)
	{
		digit = '0' + positions[index];
		write(1, &digit, 1);
		index++;
	}
	write(1, "\n", 1);
}


#include <stdio.h>
int main (void)
{
	printf("solutions=%d\n", ft_ten_queens_puzzle());
	return (0);
}

