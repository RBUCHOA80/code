/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wait.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 20:48:48 by ruchoa            #+#    #+#             */
/*   Updated: 2023/12/01 20:49:05 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_wait(t_minishell *data)
{
	while (data->pipe_count + 1)
		waitpid(data->child_pid[data->pipe_count--], &data->ret, 0);
	if (data->ret > 256)
		data->ret /= 256;
	return (EXIT_SUCCESS);
}
