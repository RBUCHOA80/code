/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 22:20:25 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/06 22:58:29 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
sa (swap a):
Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements.
*/
void	sa(int *stack_a)
{
	int	temp;

	temp = stack_a[0];
	stack_a[0] = stack_a[1];
	stack_a[1] = temp;
	return ;
}

/*
sb (swap b):
Swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements.
*/
void	sb(int *stack_b)
{
	int	temp;

	temp = stack_b[0];
	stack_b[0] = stack_b[1];
	stack_b[1] = temp;
	return ;
}

/*
ss :
sa and sb at the same time.
*/
void	ss(int *stack_a, int *stack_b)
{
	sa(stack_a);
	sb(stack_b);
	return ;
}

/* #include "push_swap.h"

int	main(void)
{
	static int	stack_a[] = {2, 1, 3, 6, 5, 8};
	int			size;

	size = (sizeof(stack_a) / sizeof(*stack_a));
	sa(stack_a);
	ft_printf_arr(stack_a, size);
	return (0);
} */
