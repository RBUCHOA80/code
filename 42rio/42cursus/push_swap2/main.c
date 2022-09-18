/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:32:27 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/18 17:33:05 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char**argv)
{
	if (argc < 2)
	{
		ft_printf("\e[1;31mError\n\e[0m");
		return (1);
	}
	ft_printf("\e[1;33m");
	while (*++argv)
		ft_printf("%s\n", *argv);
	ft_printf("\e[0m");
	return (0);
}
