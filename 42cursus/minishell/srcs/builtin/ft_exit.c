/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:18:28 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/04 23:36:11 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

void	ft_exit(int status)
{
	(void)status;
	printf("ft_exit()\n");
	exit(EXIT_SUCCESS);
}

/* int	ft_exit(t_minishell *data, char *command)
{
	(void)data;
	(void)command;
	printf("ft_exit()\n");
	return (EXIT_SUCCESS);
} */
