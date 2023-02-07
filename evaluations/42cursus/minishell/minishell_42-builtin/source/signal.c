/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parnaldo <parnaldo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:38:39 by parnaldo          #+#    #+#             */
/*   Updated: 2023/02/06 14:05:31 by parnaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

void	check_eof(t_info *info)
{
	if(!info->prompt)
	{
		write(1, "exit\n", 5);
		exit(0);
	}
}

void	handler(int sig)
{

  if(sig == SIGINT)
  {
    write(1, "\n", 1);
	rl_on_new_line();
	rl_replace_line("", 0);
	rl_redisplay();
  }
}

void	set_signal_handler(void)
{
  signal(SIGINT, handler);
  signal(SIGQUIT, SIG_IGN);
  signal(SIGTSTP, SIG_IGN);
}
