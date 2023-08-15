/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:30:30 by pabatist          #+#    #+#             */
/*   Updated: 2023/08/15 19:54:42 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

int	is_int(t_data *data)
{
	int	index;
	int	aux;

	index = 0;
	while (index < data->stack_a.size)
	{
		if (data->stack_a.content[index] > 2147483647
			|| data->stack_a.content[index] < -2147483648)
			return (0);
		aux = 0;
		while (aux < data->stack_a.size)
		{
			if (data->stack_a.content[index] == data->stack_a.content[aux] \
					&& index != aux)
				return (0);
			aux++;
		}
		index++;
	}
	return (1);
}

int	parse_stacks(t_data *data, size_t size, char *argv[])
{
	if (size == 1)
	{
		if (!populate_string(data, argv))
			return (0);
		if (!is_int(data))
			return (0);
	}
	else
	{
		if (!populate_args(data, size, argv))
			return (0);
		if (!is_int(data))
			return (0);
	}
	return (1);
}

int	populate_string(t_data *data, char *argv[])
{
	size_t	index;
	size_t	aux;
	char	**split;

	split = ft_split(argv[1], ' ');
	calloc_double(data, split_len(split), sizeof(long long int));
	index = 0;
	while (split[index])
	{
		aux = 0;
		while (aux < ft_strlen(split[index]))
		{
			if ((!ft_isdigit(split[index][aux])))
				return (free_split(split));
			aux++;
		}
		data->stack_a.content[index] = ft_atoi(split[index]);
		index++;
	}
	data->stack_a.size = index;
	data->num_args = index;
	free_split(split);
	return (1);
}

int	populate_args(t_data *data, size_t size, char *argv[])
{
	size_t	index;
	size_t	aux;

	calloc_double(data, size, sizeof(long long int));
	index = 0;
	while (index < size)
	{
		aux = 0;
		while (aux < ft_strlen(argv[index + 1]))
		{
			if (!ft_isdigit(argv[index + 1][aux])
				&& argv[index + 1][aux] != '-' && argv[index + 1][aux] != '+')
				return (0);
			aux++;
		}
		data->stack_a.content[index] = ft_atoi(argv[index + 1]);
		index++;
	}
	data->num_args = index;
	data->stack_a.size = index;
	return (1);
}

int	parse_referene(t_data *data)
{
	int	index;

	index = 0;
	data->reference = calloc(data->num_args, sizeof(long long int));
	while (index < data->num_args)
	{
		data->reference[index] = data->stack_a.content[index];
		index++;
	}
	return (1);
}
