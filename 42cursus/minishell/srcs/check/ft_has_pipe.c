/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_has_pipe.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 19:12:41 by ruchoa            #+#    #+#             */
/*   Updated: 2023/11/05 19:16:53 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_has_pipe(t_minishell *data)
{
	if (data->pipe_matrix != NULL)
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
