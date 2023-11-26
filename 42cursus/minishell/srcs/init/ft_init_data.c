/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_data.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 22:28:42 by ruchoa            #+#    #+#             */
/*   Updated: 2023/11/25 22:28:43 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_init_data(t_minishell *data)
{
	data->backup_fdin = dup(STDIN_FILENO);
	data->backup_fdout = dup(STDOUT_FILENO);
	data->pipe_matrix = NULL;
	data->pipe_count = -1;
	return (EXIT_SUCCESS);
}
