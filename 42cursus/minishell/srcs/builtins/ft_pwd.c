/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pwd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:56:19 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/28 00:48:47 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int	ft_pwd(t_minishell *data)
{
	char	buf[PATH_MAX];

	data->token = data->token->next;
	if (getcwd(buf, PATH_MAX) != RETURN_SUCCESS)
		return (RETURN_FAILURE);
	ft_putstr_fd("\n", 1);
	ft_putstr_fd(buf, 1);
	return (RETURN_SUCCESS);
}
