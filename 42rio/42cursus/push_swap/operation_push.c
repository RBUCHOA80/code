/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 22:30:46 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/17 20:16:58 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
pa (push a):
Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.
*/
void	pa(int *list_a, int size_a, int *list_b, int size_b)
{
	int	*temp_a;
	int	*temp_b;

	if (size_a && size_b)
	{
		temp_a = list_a;
		temp_b = list_b;
	}
	return ;
}

/*
pb (push b):
Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.
*/
void	pb(int *list_a, int size_a, int *list_b, int size_b)
{
	int	*temp_a;
	int	*temp_b;

	if (size_a && size_b)
	{
		temp_a = list_a;
		temp_b = list_b;
	}
	return ;
}

/* #include "push_swap.h"

int	main(void)
{
	static int	list_a[] = {2, 1, 3, 6, 5, 8};
	static int	list_b[] = {};
	int			size_a;
	int			size_b;

	size_a = (sizeof(list_a) / sizeof(*list_a));
	size_b = (sizeof(list_b) / sizeof(*list_b));
	pa(list_a, size_a, list_b, size_b);
	ft_printf_arr(list_a, size_a);
	ft_printf_arr(list_b, size_b);
	return (0);
} */
