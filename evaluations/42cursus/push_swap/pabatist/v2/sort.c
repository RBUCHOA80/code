/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabatist <pabatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:31:09 by pabatist          #+#    #+#             */
/*   Updated: 2023/08/14 16:31:10 by pabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_five_num(t_data *data)
{
	int	index;
	int	smallest;

	index = 0;
	smallest = find_small_number_index(data->stack_a);
	while (index++ < smallest)
		choose_call("ra", data);
	choose_call("pb", data);
	index = 0;
	smallest = find_small_number_index(data->stack_a);
	while (index++ < smallest)
		choose_call("ra", data);
	choose_call("pb", data);
	sort_three_num(data);
	if (data->stack_b.content[0] < data->stack_b.content[1])
		choose_call("sb", data);
	choose_call("pa", data);
	choose_call("pa", data);
	return (1);
}

void	sort_three_num(t_data *data)
{
	int	nums[3];

	nums[0] = data->stack_a.content[0];
	nums[1] = data->stack_a.content[1];
	nums[2] = data->stack_a.content[2];
	if (nums[0] > nums[1] && nums[0] < nums[2] && nums[1] < nums[2])
		choose_call("sa", data);
	if (nums[0] > nums[1] && nums[0] > nums[2] && nums[1] > nums[2])
	{
		choose_call("sa", data);
		choose_call("rra", data);
	}
	if (nums[0] > nums[1] && nums[0] > nums[2] && nums[1] < nums[2])
		choose_call("ra", data);
	if (nums[0] < nums[1] && nums[0] < nums[2] && nums[1] > nums[2])
	{
		choose_call("sa", data);
		choose_call("ra", data);
	}
	if (nums[0] < nums[1] && nums[0] > nums[2] && nums[1] > nums[2])
		choose_call("rra", data);
}

void	push_field(t_data *data, int min, int max)
{
	int	index;
	int	min_index;

	while (has_field(data->stack_a, data->reference[min], data->reference[max]))
	{
		if (data->stack_a.content[0] >= data->reference[min]
			&& data->stack_a.content[0] < data->reference[max])
			choose_call("pb", data);
		else
		{
			index = 0;
			min_index = get_field_front(data->stack_a, data->reference[min],
					data->reference[max]);
			if (min_index < data->stack_a.size / 2)
				while (index++ < min_index)
					choose_call("ra", data);
			else
				while (index++ < (data->stack_a.size - min_index))
					choose_call("rra", data);
		}
	}
}

// void	push_back(t_data *data)
// {
// 	int	index;
// 	int	max_index;

// 	while (data->stack_b.size > 0)
// 	{
// 		index = 0;
// 		max_index = find_big_number_index(data->stack_b);
// 		if (max_index < (data->stack_b.size / 2))
// 			while (index++ < max_index)
// 				choose_call("rb", data);
// 		else
// 			while (index++ < data->stack_b.size - max_index)
// 				choose_call("rrb", data);
// 		choose_call("pa", data);
// 	}
// }

int	push_sorting(t_data *data)
{
	int	index;
	int	max_index;

	while (data->stack_b.size > 0)
	{
		index = 0;
		max_index = find_big_number_index(data->stack_b);
		if (max_index < (data->stack_b.size / 2))
			while (index++ < max_index)
				choose_call("rb", data);
		else
			while (index++ < data->stack_b.size - max_index)
				choose_call("rrb", data);
		choose_call("pa", data);
	}
	return (1);
}

void	sort_algorithm(t_data *data, int max_offset)
{
	int	index;
	int	offset;

	offset = data->num_args / max_offset;
	index = 0;
	while (index < (max_offset - 1))
	{
		push_field(data, offset * index, offset * (index + 1));
		index++;
	}
	while (has_field(data->stack_a, data->reference[offset * (max_offset - 1)],
			data->reference[data->num_args - 3]))
		push_field(data, offset * (max_offset - 1), data->num_args - 3);
	sort_three_num(data);
	push_sorting(data);
}
