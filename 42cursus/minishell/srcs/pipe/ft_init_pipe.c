/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_pipe.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 19:12:42 by ruchoa            #+#    #+#             */
/*   Updated: 2023/11/25 10:44:57 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_init_pipe(t_minishell *data)
{
	int	i;

	data->pipe_count = ft_count_pipe(data);
	if (data->pipe_count)
	{
		data->pipe_matrix = ft_calloc(data->pipe_count + 1, sizeof(int *));
		i = 0;
		while (i < data->pipe_count)
		{
			data->pipe_matrix[i] = ft_calloc(2, sizeof(int));
			pipe(data->pipe_matrix[i]);
			i++;
		}
		return (EXIT_SUCCESS);
	}
	return (EXIT_FAILURE);
}
