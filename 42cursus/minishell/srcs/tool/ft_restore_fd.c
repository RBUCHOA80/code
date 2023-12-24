/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_restore_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 20:52:58 by ruchoa            #+#    #+#             */
/*   Updated: 2023/12/01 20:53:09 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_restore_fd(t_minishell *data)
{
	dup2(data->backup_fdin, STDIN_FILENO);
	dup2(data->backup_fdout, STDOUT_FILENO);
	return (EXIT_SUCCESS);
}
