/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 22:20:25 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/14 17:57:04 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_oswap(int *stack)
{
	int	temp;

	temp = stack[0];
	stack[0] = stack[1];
	stack[1] = temp;
	return ;
}

/*
sa (swap a):
Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements.
*/
void	sa(int *stack_a)
{
	return ;
}

/*
sb (swap b):
Swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements.
*/
void	sb(int *stack_b)
{
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

#define NELEMS(arr)  (sizeof(arr) / sizeof((arr)[0]))

int	main(void)
{
	return (0);
} */
