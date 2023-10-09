/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pwd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:56:19 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/08 20:45:04 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_pwd(t_minishell *data)
{
	char	buf[PATH_MAX];

	data->token = data->token->next;
	getcwd(buf, PATH_MAX);
	printf("%s\n", buf);
	return (EXIT_SUCCESS);
}
