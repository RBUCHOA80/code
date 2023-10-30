/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_banner.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:29:38 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/29 21:28:41 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_banner(void)
{
	ft_fprintf(STDOUT, "            _         _       _            _  _ \n");
	ft_fprintf(STDOUT, "           (_)       (_)     | |          | || |\n");
	ft_fprintf(STDOUT, " _ __ ___   _  _ __   _  ___ | |__    ___ | || |\n");
	ft_fprintf(STDOUT, "| '_ ` _ \\ | || '_ \\ | |/ __|| '_ \\  / _ \\| || |\n");
	ft_fprintf(STDOUT, "| | | | | || || | | || |\\__ \\| | | ||  __/| || |\n");
	ft_fprintf(STDOUT, "|_| |_| |_||_||_| |_||_||___/|_| |_| \\___||_||_|\n");
	ft_fprintf(STDOUT, "\n");
	return (EXIT_SUCCESS);
}
