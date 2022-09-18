/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 22:24:22 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/17 20:16:58 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ra (rotate a):
Shift up all elements of list a by 1.
The first element becomes the last one.
*/
void	ra(int *list_a, int size)
{
	int	temp;
	int	i;

	i = 0;
	temp = list_a[i];
	while (i < size)
	{
		list_a[i] = list_a[i + 1];
		i++;
	}
	list_a[i - 1] = temp;
	return ;
}

/*
rb (rotate b):
Shift up all elements of list b by 1.
The first element becomes the last one.
*/
void	rb(int *list_b, int size)
{
	int	temp;
	int	i;

	i = 0;
	temp = list_b[i];
	while (i < size)
	{
		list_b[i] = list_b[i + 1];
		i++;
	}
	list_b[i - 1] = temp;
	return ;
}

/*
rr :
ra and rb at the same time.
*/
void	rr(int *list_a, int size_a, int *list_b, int size_b)
{
	ra(list_a, size_a);
	ra(list_b, size_b);
	return ;
}

/* #include "push_swap.h"

int	main(void)
{
	static int	list_a[] = {2, 1, 3, 6, 5, 8};
	int			size;

	size = (sizeof(list_a) / sizeof(*list_a));
	ra(list_a, size);
	ft_printf_arr(list_a, size);
	return (0);
} */
