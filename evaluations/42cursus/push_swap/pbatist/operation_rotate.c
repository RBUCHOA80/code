/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabatist <pabatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:30:13 by pabatist          #+#    #+#             */
/*   Updated: 2023/08/14 16:30:14 by pabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate_a(t_data *data)
{
	int	index;
	int	temp;

	temp = data->stack_a.content[0];
	index = 0;
	while (index < data->stack_a.size)
	{
		data->stack_a.content[index] = data->stack_a.content[index + 1];
		index++;
	}
	data->stack_a.content[data->stack_a.size - 1] = temp;
	return (1);
}

int	rotate_b(t_data *data)
{
	int	index;
	int	temp;

	temp = data->stack_b.content[0];
	index = 0;
	while (index < data->stack_b.size)
	{
		data->stack_b.content[index] = data->stack_b.content[index + 1];
		index++;
	}
	data->stack_b.content[data->stack_b.size - 1] = temp;
	return (1);
}

int	rotate_a_b(t_data *data)
{
	rotate_a(data);
	rotate_b(data);
	return (1);
}
