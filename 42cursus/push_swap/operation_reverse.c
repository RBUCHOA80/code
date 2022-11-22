/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_reverse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 22:23:03 by ruchoa            #+#    #+#             */
/*   Updated: 2022/11/21 22:07:29 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
rra (reverse rotate a):
Shift down all elements of stack a by 1.
The last element becomes the first one.
*/
void	rra(int *stack_a, int size)
{
	int	temp;

	temp = stack_a[size - 1];
	while (size)
	{
		stack_a[size] = stack_a[size - 1];
		size--;
	}
	stack_a[0] = temp;
	return ;
}

/*
rrb (reverse rotate b):
Shift down all elements of stack b by 1.
The last element becomes the first one.
*/
void	rrb(int *stack_b, int size)
{
	int	temp;

	temp = stack_b[size - 1];
	while (size)
	{
		stack_b[size] = stack_b[size - 1];
		size--;
	}
	stack_b[0] = temp;
}

/*
rrr :
rra and rrb at the same time.
*/
void	rrr(int *stack_a, int size_a, int *stack_b, int size_b)
{
	rrb(stack_a, size_a);
	rrb(stack_b, size_b);
	return ;
}

/* #include "./push_swap.h"

int	main(void)
{
	static int	stack_a[] = {2, 1, 3, 6, 5, 8};
	int			size;

	size = (sizeof(stack_a) / sizeof(*stack_a));
	rra(stack_a, size);
	ft_printf_arr(stack_a, size);
	return (0);
} */
