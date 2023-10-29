/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pwd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:56:19 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/28 22:52:34 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_pwd(t_minishell *data)
{
	char	buf[FILENAME_MAX];

	data->token = data->token->next;
	if (getcwd(buf, FILENAME_MAX) != EXIT_SUCCESS)
		return (EXIT_FAILURE);
	ft_putstr_fd("\n", STDOUT);
	ft_putstr_fd(buf, STDOUT);
	return (EXIT_SUCCESS);
}
