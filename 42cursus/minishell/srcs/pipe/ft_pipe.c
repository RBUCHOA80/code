/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pipe.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 22:47:31 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/28 00:53:14 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int	ft_pipe(t_minishell *data)
{
	data->pipe_array = ft_calloc(2, sizeof(int));
	pipe(data->pipe_array);
	printf("%s\n", YELLOW);
	printf("addres -> %p\t", &data->pipe_array[0]);
	printf("file descriptor read -> %i\n", data->pipe_array[0]);
	printf("addres -> %p\t", &data->pipe_array[1]);
	printf("file descriptor write -> %i\n", data->pipe_array[1]);
	printf("%s\n", WHITE);
	return (EXIT_SUCCESS);
}
