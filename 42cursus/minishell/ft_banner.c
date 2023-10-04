/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_banner.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:29:38 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/03 20:40:45 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./minishell.h"

int	ft_banner(void)
{
	printf("             _         _       _            _  _ \n");
	printf("            (_)       (_)     | |          | || |\n");
	printf("  _ __ ___   _  _ __   _  ___ | |__    ___ | || |\n");
	printf(" | '_ ` _ \\ | || '_ \\ | |/ __|| '_ \\  / _ \\| || |\n");
	printf(" | | | | | || || | | || |\\__ \\| | | ||  __/| || |\n");
	printf(" |_| |_| |_||_||_| |_||_||___/|_| |_| \\___||_||_|\n");
	printf(" \n");
	return (EXIT_SUCCESS);
}