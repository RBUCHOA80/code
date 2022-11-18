/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:00:54 by ruchoa            #+#    #+#             */
/*   Updated: 2022/11/17 21:13:46 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# ifndef FD
#  define FD 1
# endif

# ifndef DELAY
#  define DELAY 750
# endif

# include <signal.h>
# include "../libft/libft.h"

void	ft_encrypt(int pid, char chr);
void	ft_decrypt(int sig);

#endif
