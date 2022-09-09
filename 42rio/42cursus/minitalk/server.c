/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 22:01:11 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/08 21:14:45 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h" //libft
#include <signal.h> //SIGUSR1 / SIGUSR2

void	ft_decrypt(int sig)
{
	static char	chr;
	static int	bit;

	if (sig == SIGUSR1)
		chr = chr + (1 << bit);
	bit++;
	if (bit == 8)
	{
		ft_putchar_fd(chr, 1);
		chr = 0;
		bit = 0;
	}
}

int	main(void)
{
	signal(SIGUSR2, &ft_decrypt);
	signal(SIGUSR1, &ft_decrypt);
	ft_putstr_fd("\e[1;35mPID: ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putstr_fd("\e[m\n", 1);
	while (1)
		pause();
	return (0);
}
