/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_banner.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:29:38 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/28 22:52:34 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_banner(void)
{
	ft_putstr_fd("             _         _       _            _  _ \n", STDOUT);
	ft_putstr_fd("            (_)       (_)     | |          | || |\n", STDOUT);
	ft_putstr_fd("  _ __ ___   _  _ __   _  ___ | |__    ___ | || |\n", STDOUT);
	ft_putstr_fd(" | '_ ` _ \\ | || '_ \\ | |/ __|| '_ \\  / _ \\| || |\n", STDOUT);
	ft_putstr_fd(" | | | | | || || | | || |\\__ \\| | | ||  __/| || |\n", STDOUT);
	ft_putstr_fd(" |_| |_| |_||_||_| |_||_||___/|_| |_| \\___||_||_|\n", STDOUT);
	ft_putstr_fd(" \n", STDOUT);
	return (EXIT_SUCCESS);
}
