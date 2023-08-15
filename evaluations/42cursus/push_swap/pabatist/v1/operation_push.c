/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabatist <pabatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:29:59 by pabatist          #+#    #+#             */
/*   Updated: 2023/08/14 16:30:00 by pabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

int	push_a(t_data *data)
{
	int	index;

	if (data->stack_b.size == 0)
		return (0);
	index = data->stack_a.size;
	while (index > 0)
	{
		data->stack_a.content[index] = data->stack_a.content[index - 1];
		index--;
	}
	data->stack_a.content[0] = data->stack_b.content[0];
	data->stack_a.size++;
	index = 0;
	while (index < data->stack_b.size - 1)
	{
		data->stack_b.content[index] = data->stack_b.content[index + 1];
		index++;
	}
	data->stack_b.content[data->stack_b.size - 1] = 0;
	data->stack_b.size--;
	return (1);
}

int	push_b(t_data *data)
{
	int	index;

	if (data->stack_a.size == 0)
		return (0);
	index = data->stack_b.size;
	while (index > 0)
	{
		data->stack_b.content[index] = data->stack_b.content[index - 1];
		index--;
	}
	data->stack_b.content[0] = data->stack_a.content[0];
	data->stack_b.size++;
	index = 0;
	while (index < data->stack_a.size - 1)
	{
		data->stack_a.content[index] = data->stack_a.content[index + 1];
		index++;
	}
	data->stack_a.content[data->stack_a.size - 1] = 0;
	data->stack_a.size--;
	return (1);
}
