/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_signal                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 22:30:27 by ruchoa            #+#    #+#             */
/*   Updated: 2023/11/25 22:30:30 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

//"CTRL+C" = SIGINT
//"CTRL+\" = SIGQUIT
int	ft_init_signal(void)
{
	signal(SIGINT, &ft_signal);
	signal(SIGQUIT, SIG_IGN);
	return (EXIT_SUCCESS);
}
