/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 22:24:22 by ruchoa            #+#    #+#             */
/*   Updated: 2022/11/21 22:07:29 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ra (rotate a):
Shift up all elements of stack a by 1.
The first element becomes the last one.
*/
void	ra(int *stack_a, int size)
{
	int	temp;
	int	i;

	i = 0;
	temp = stack_a[i];
	while (i < size)
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	stack_a[i - 1] = temp;
	return ;
}

/*
rb (rotate b):
Shift up all elements of stack b by 1.
The first element becomes the last one.
*/
void	rb(int *stack_b, int size)
{
	int	temp;
	int	i;

	i = 0;
	temp = stack_b[i];
	while (i < size)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	stack_b[i - 1] = temp;
	return ;
}

/*
rr :
ra and rb at the same time.
*/
void	rr(int *stack_a, int size_a, int *stack_b, int size_b)
{
	ra(stack_a, size_a);
	ra(stack_b, size_b);
	return ;
}

/* #include "./push_swap.h"

int	main(void)
{
	static int	stack_a[] = {2, 1, 3, 6, 5, 8};
	int			size;

	size = (sizeof(stack_a) / sizeof(*stack_a));
	ra(stack_a, size);
	ft_printf_arr(stack_a, size);
	return (0);
} */
