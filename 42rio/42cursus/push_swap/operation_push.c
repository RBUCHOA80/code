/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 22:30:46 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/06 23:47:04 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
pa (push a):
Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.
*/
void	pa(int *stack_a, int size_a, int *stack_b, int size_b)
{
	int	*temp_a;
	int	*temp_b;

	if (size_a && size_b)
	{
		temp_a = stack_a;
		temp_b = stack_b;
	}
	return ;
}

/*
pb (push b):
Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.
*/
void	pb(int *stack_a, int size_a, int *stack_b, int size_b)
{
	int	*temp_a;
	int	*temp_b;

	if (size_a && size_b)
	{
		temp_a = stack_a;
		temp_b = stack_b;
	}
	return ;
}

#include "push_swap.h"

int	main(void)
{
	static int	stack_a[] = {2, 1, 3, 6, 5, 8};
	static int	stack_b[] = {6, 5, 8, 2, 1, 3};
	int			size_a;
	int			size_b;

	size_a = (sizeof(stack_a) / sizeof(*stack_a));
	size_b = (sizeof(stack_b) / sizeof(*stack_b));
	pa(stack_a, size_a, stack_b, size_b);
	ft_printf_arr(stack_a, size_a);
	ft_printf_arr(stack_b, size_b);
	return (0);
}
