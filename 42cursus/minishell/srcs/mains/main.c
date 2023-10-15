/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:06:55 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/15 15:51:14 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int	main(void)
{
	t_minishell	data;

	ft_banner();
	ft_init(&data);
	minishell(&data);
	return (RETURN_SUCCESS);
}
