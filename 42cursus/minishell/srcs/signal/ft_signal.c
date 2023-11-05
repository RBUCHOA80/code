/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_signal.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:29:29 by ruchoa            #+#    #+#             */
/*   Updated: 2023/11/05 19:31:01 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

//"CTRL+C" = SIGINT
//"CTRL+\" = SIGQUIT
void	ft_signal(int sig)
{
	if (sig == SIGINT)
	{
		ft_fprintf(STDOUT_FILENO, "\n");
		rl_on_new_line();
		rl_replace_line("", EXIT_SUCCESS);
		rl_redisplay();
	}
	return ;
}
