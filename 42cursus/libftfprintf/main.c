/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:42:14 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/29 21:00:09 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftfprintf.h" //ft_fprintf

#include <stdio.h> //fprintf
#include <fcntl.h> //open

int	main(void)
{
	char	*str;
	int		ret;
	int		nbr;
	int		fd;

	str = "Put your sample here!";
	fd = 1;
	nbr = 0x10;
	ret = fprintf("   fprintf -> %p %p %s %i ", &str, str, str, nbr);
	fprintf("\e[0;32m(%d byte(s))\e[0m\n", fd, ret);
	ret = ft_fprintf("ft_fprintf -> %p %p %s %i ", &str, &str[0], str, nbr);
	ft_fprintf("\e[0;32m(%d byte(s))\e[0m\n", fd, ret);
	return (0);
}
