/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:00:54 by ruchoa            #+#    #+#             */
/*   Updated: 2022/11/19 10:29:05 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_BONUS_H
# define MINITALK_BONUS_H

# ifndef FD
#  define FD 1
# endif

# ifndef DELAY
#  define DELAY 750
# endif

# include <signal.h>
# include "../libft/libft.h"

void	ft_encrypt(int pid, char chr);
void	ft_decrypt(int sig, siginfo_t *info, void *context);

#endif
