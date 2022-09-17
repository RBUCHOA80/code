/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:20:03 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/17 11:20:46 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
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

//fd = open("./sample.txt", O_RDWR | O_CREAT | O_APPEND, 00700);