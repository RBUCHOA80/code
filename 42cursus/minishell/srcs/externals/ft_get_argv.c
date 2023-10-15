/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_argv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:07:18 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/15 11:47:33 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

char	**ft_get_argv(t_minishell *data)
{
	char	**argv;

	argv = ft_split(ft_get_cmd(data), ' ');
	return (argv);
}
