/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabatist <pabatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:30:37 by pabatist          #+#    #+#             */
/*   Updated: 2023/08/14 16:30:38 by pabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	choose_call(char *call, t_data *data)
{
	if (ft_strnstr(call, "rra", ft_strlen(call)) && ft_printf("rra\n"))
		reverse_rotate_a(data);
	else if (ft_strnstr(call, "rrb", ft_strlen(call)) && ft_printf("rrb\n"))
		reverse_rotate_b(data);
	else if (ft_strnstr(call, "rrr", ft_strlen(call)) && ft_printf("rrr\n"))
		reverse_rotate_a_b(data);
	else if (ft_strnstr(call, "sa", ft_strlen(call)) && ft_printf("sa\n"))
		swap_a(data);
	else if (ft_strnstr(call, "sb", ft_strlen(call)) && ft_printf("sb\n"))
		swap_b(data);
	else if (ft_strnstr(call, "ss", ft_strlen(call)) && ft_printf("ss\n"))
		swap_a_b(data);
	else if (ft_strnstr(call, "pa", ft_strlen(call)) && ft_printf("pa\n"))
		push_a(data);
	else if (ft_strnstr(call, "pb", ft_strlen(call)) && ft_printf("pb\n"))
		push_b(data);
	else if (ft_strnstr(call, "ra", ft_strlen(call)) && ft_printf("ra\n"))
		rotate_a(data);
	else if (ft_strnstr(call, "rb", ft_strlen(call)) && ft_printf("rb\n"))
		rotate_b(data);
	else if (ft_strnstr(call, "rr", ft_strlen(call)) && ft_printf("rr\n"))
		rotate_a_b(data);
	return (1);
}

int	sort_reference(t_data *data)
{
	int	index;
	int	offset;
	int	temp;

	offset = 0;
	while (offset < data->num_args)
	{
		index = 0;
		while (index < data->num_args - 1)
		{
			if (data->reference[index] > data->reference[index + 1])
			{
				temp = data->reference[index];
				data->reference[index] = data->reference[index + 1];
				data->reference[index + 1] = temp;
			}
			index++;
		}
		offset++;
	}
	return (1);
}

int	split_len(char **split)
{
	int	index;

	index = 0;
	while (split[index])
		index++;
	return (index);
}

int	calloc_double(t_data *data, size_t count, size_t size)
{
	data->stack_a.content = ft_calloc(count, size);
	data->stack_b.content = ft_calloc(count, size);
	return (1);
}
