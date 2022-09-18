/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_reverse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 22:23:03 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/17 20:16:58 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
rra (reverse rotate a):
Shift down all elements of list a by 1.
The last element becomes the first one.
*/
void	rra(int *list_a, int size)
{
	int	temp;

	temp = list_a[size - 1];
	while (size)
	{
		list_a[size] = list_a[size - 1];
		size--;
	}
	list_a[0] = temp;
	return ;
}

/*
rrb (reverse rotate b):
Shift down all elements of list b by 1.
The last element becomes the first one.
*/
void	rrb(int *list_b, int size)
{
	int	temp;

	temp = list_b[size - 1];
	while (size)
	{
		list_b[size] = list_b[size - 1];
		size--;
	}
	list_b[0] = temp;
}

/*
rrr :
rra and rrb at the same time.
*/
void	rrr(int *list_a, int size_a, int *list_b, int size_b)
{
	rrb(list_a, size_a);
	rrb(list_b, size_b);
	return ;
}

/* #include "push_swap.h"

int	main(void)
{
	static int	list_a[] = {2, 1, 3, 6, 5, 8};
	int			size;

	size = (sizeof(list_a) / sizeof(*list_a));
	rra(list_a, size);
	ft_printf_arr(list_a, size);
	return (0);
} */
