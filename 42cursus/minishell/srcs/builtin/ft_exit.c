/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:18:28 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/08 20:52:32 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_exit(int status)
{
	(void)status;
	exit(EXIT_SUCCESS);
	return (EXIT_SUCCESS);
}

/* int	ft_exit(t_minishell *data, char *command)
{
	(void)data;
	(void)command;
	printf("ft_exit()\n");
	return (EXIT_SUCCESS);
} */
