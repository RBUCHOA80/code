/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:42:14 by ruchoa            #+#    #+#             */
/*   Updated: 2022/11/15 10:45:00 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h" //ft_printf

#include <stdio.h> //printf
#include <fcntl.h> //open

int	main(void)
{
	char	*str;
	int		ret;
	int		nbr;

	str = "Put your sample here!";
	nbr = 0x10;
	ret = printf("   printf -> %p %p %s %i ", &str, str, str, nbr);
	printf("\e[0;32m(%d byte(s))\e[0m\n", ret);
	ret = ft_printf("ft_printf -> %p %p %s %i ", &str, &str[0], str, nbr);
	ft_printf("\e[0;32m(%d byte(s))\e[0m\n", ret);
	return (0);
}
