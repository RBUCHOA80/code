/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 19:14:49 by cnascime          #+#    #+#             */
/*   Updated: 2022/08/26 19:33:45 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"

int	main(void)
{
//	int		nbr;
	char	*str;

//	nbr = NULL;
	str = NULL;
/* 	ft_printf("%i\n", nbr);
	ft_printf("%x\n", nbr);
	ft_printf("%d\n", nbr);
	ft_printf("%p\n\n", &nbr); */
	ft_printf("%s\n", str);
	ft_printf("%p\n", str);
	ft_printf("%p\n", &str);
	return (0);
}
